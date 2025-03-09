import os
import sys
import can
import time
import subprocess
import signal

# Configuration
CAN_INTERFACE = 'vcan0'
LOG_FILE = 'can_log_14122024.txt'
is_teardown_done = False  # Global flag to track teardown status


# Function to set up virtual CAN interface
def setup_virtual_can():
    try:
        print("Setting up virtual CAN interface...")

        # Check if can0 already exists
        result = subprocess.run(['ip', 'link', 'show', CAN_INTERFACE],
                                stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if result.returncode == 0:
            print(f"{CAN_INTERFACE} already exists. Bringing it up.")
            subprocess.run(['sudo', 'ip', 'link', 'set',
                        'up', CAN_INTERFACE], check=True)
        else:
            print(f"{CAN_INTERFACE} does not exist. Creating now...")
            subprocess.run(['sudo', 'ip', 'link', 'add', 'dev',
                        CAN_INTERFACE, 'type', 'vcan'], check=True)
            subprocess.run(['sudo', 'ip', 'link', 'set',
                        'up', CAN_INTERFACE], check=True)

        print(f"Virtual CAN interface '{CAN_INTERFACE}' is ready.")


    except subprocess.CalledProcessError as e:
        print(f"Failed to set up virtual CAN: {e}")
        exit(1)
    # try:
    #     print("Setting up virtual CAN interface...")
    #     subprocess.run(['sudo', 'modprobe', 'vcan'], check=True)
    #     subprocess.run(['sudo', 'ip', 'link', 'add', 'dev', CAN_INTERFACE, 'type', 'vcan'], check=True)
    #     subprocess.run(['sudo', 'ip', 'link', 'set', 'up', CAN_INTERFACE], check=True)
    #     print(f"Virtual CAN interface '{CAN_INTERFACE}' is up.")
    # except subprocess.CalledProcessError as e:
    #     if 'File exists' in str(e):
    #         print(f"{CAN_INTERFACE} already exists. Bringing it up...")
    #         subprocess.run(['sudo', 'ip', 'link', 'set', CAN_INTERFACE, 'up'], check=True)
    #     else:
    #         print(f"Failed to set up virtual CAN: {e}")
    #         exit(1)


# Function to gracefully shut down the virtual CAN interface
def teardown_virtual_can():
    global is_teardown_done
    if is_teardown_done:
        return  # Prevent double teardown

    try:
        print("\nShutting down virtual CAN interface...")
        subprocess.run(['sudo', 'ip', 'link', 'set',
                       'down', CAN_INTERFACE], check=True)
        subprocess.run(['sudo', 'ip', 'link', 'delete',
                       CAN_INTERFACE], check=True)
        print(f"Virtual CAN interface '{CAN_INTERFACE}' has been removed.")
        is_teardown_done = True
    except subprocess.CalledProcessError as e:
        print(f"Failed to tear down virtual CAN: {e}")
        is_teardown_done = True


# Parse each line in the CAN log
def parse_log_line(line):
    try:
        if "Timestamp" in line and "ID" in line and "Data" in line:
            parts = line.split(',')
            timestamp = float(parts[0].split(': ')[1])
            can_id = int(parts[1].split(': ')[1], 16)
            data = bytes.fromhex(parts[2].split(': ')[1].strip())
            return timestamp, can_id, data
    except Exception as e:
        print(f"Failed to parse line: {line.strip()} | Error: {e}")
    return None, None, None


# Replay CAN messages
def replay_can_log():
    try:
        bus = can.interface.Bus(channel=CAN_INTERFACE, bustype='socketcan')
        print("Starting CAN log replay...")

        with open(LOG_FILE, 'r') as file:
            prev_timestamp = None
            for line in file:
                timestamp, can_id, data = parse_log_line(line)
                if timestamp is None:
                    continue

                # Timing control
                if prev_timestamp is not None:
                    time_diff = timestamp - prev_timestamp
                    if time_diff > 0:
                        time.sleep(time_diff)

                prev_timestamp = timestamp

                # Send CAN message
                message = can.Message(
                    arbitration_id=can_id, data=data, is_extended_id=False)
                try:
                    bus.send(message)
                    print(f"Sent: ID=0x{can_id:X}, Data={data.hex()}")
                except can.CanError:
                    print("Failed to send CAN message.")

    except KeyboardInterrupt:
        print("\nKeyboard interrupt detected. Stopping CAN replay...")
    except FileNotFoundError:
        print(f"Log file '{LOG_FILE}' not found.")
    finally:
        bus.shutdown()


# Graceful shutdown on Ctrl+C
def signal_handler(sig, frame):
    print("\nGraceful shutdown initiated...")
    teardown_virtual_can()
    exit(0)


# Main Function
if __name__ == '__main__':
    signal.signal(signal.SIGINT, signal_handler)  # Handle Ctrl+C gracefully

    setup_virtual_can()
    try:
        replay_can_log()
    finally:
        teardown_virtual_can()

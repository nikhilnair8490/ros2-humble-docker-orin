# Radar status message from ARS 40X

bool read_status            # True if radar data was successfully read from NVM at startup
bool write_status           # True if radar data was successfully written to NVM

uint16 max_distance         # Current configuration of maximum distance of far scan

bool persistent_error       # True if radar has a persistent error
bool interference           # True if radar detects interference
bool temperature_error      # True if radar has a temperature issue
bool temporary_error        # True if a temporary error occurred
bool voltage_error          # True if a voltage issue is detected

uint8 sensor_id             # Unique sensor ID
int8 sort_index             # Sorting index for detected objects

uint8 radar_power_cfg       # Radar power mode configuration
bool ctrl_relay_cfg         # True if control relay is enabled
uint8 output_type_cfg       # Currently selected output type as either clusters or objects
bool send_quality_cfg       # True if quality information should be sent
bool send_ext_info_cfg      # True if extended object information should be sent
uint8 motion_rx_state       # Shows the state of the speed and yaw rate input signals
bool rcs_threshold          # If true the sensors high sensitivity mode is active
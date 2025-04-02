# ROS 2 Humble Docker Environment for ADAS Applications on Jetson Orin Nano

This repository provides Dockerfiles and supporting resources to create containerized ROS 2 Humble environments specifically tailored for running ADAS (Advanced Driver Assistance Systems) applications on NVIDIA Jetson Orin Nano.

It includes containerized ROS 2 drivers for:
- **Socket CAN**
- **Continental ARS404/408 Radar**
- **USB Cameras**

Additionally, it provides a sample implementation of a containerized YOLO object detection model that performs real-time inference using a USB camera connected to the Orin Nano, currently optimized for CPU inference.

---

## Getting Started

### Dependencies (required on Jetson Orin Nano)
- **NVIDIA Jetson Orin Nano:** Tested on Jetson Orin Nano 8GB Developer Kit with 120 GB SSD. ([Tanna Techbiz](https://tannatechbiz.com/nvidia-jetson-orin-nano-developer-kit.html))
- **Operating System:** Ubuntu 22.04 (LTS) with NVIDIA Jetpack 6.2 (L4T 36.4.3)
- **NVIDIA Drivers:** Installed with Jetpack 6.2. Verify installation with `nvidia-smi` command.
- **CUDA 12.6:** Installed with Jetpack 6.2. Verify installation with `nvcc --version` command.
- **ROS 2 Humble (Optional):** Installed on the host system. Follow the [ROS 2 installation guide](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html) for instructions.
- **Docker:** Ideally pre-installed with Jetpack 6.2. If Docker daemon errors occur, refer to [Docker setup guide](https://jetsonhacks.com/2025/02/24/docker-setup-on-jetpack-6-jetson-orin/).
- **CAN Device Drivers:** Tested with Peak USB CAN based on SocketCAN ([User Manual](https://www.peak-system.com/fileadmin/media/linux/files/PCAN-Driver-Linux_UserMan_eng.pdf))
- **USB Camera Drivers:** Tested with Logitech C525 ([USB Camera Setup Guide](https://jetsonhacks.com/2022/02/02/in-practice-usb-cameras-on-jetson/))

---

## Docker Image

### Prebuilt Docker Image
Pull the [prebuilt](https://hub.docker.com/r/nikhil8490/ros2-humble-docker-orin) Docker image from Docker Hub:
```sh
docker pull nikhil8490/ros2-humble-docker-orin
```

### Build Docker Image
Alternatively, build your own Docker image from the Dockerfile:
```sh
git clone https://github.com/nikhilnair8490/ros2-orin-adas-docker.git
cd ros2-orin-adas-docker
docker image build -t <image-name> -f Dockerfile .
```

---

## Setting Up Radar

Before starting the container, enable the CAN port and configure the radar:

- Connect USB camera and USB CAN device (connected to radar)

Enable CAN port (adjust `can0` or `can1` as necessary):
```sh
sudo ip link set can0 up type can bitrate 500000
sudo ip link set can0 up
```

Setup radar hardware (One-time configuration. Enables Objects detection with all extended properties):
```sh
cansend can0 200#F8000000089C0000
```

---

## Running Containers

Once the Docker image is built, use the provided Docker Compose files to manage containers.

### Radar and Camera Containers

Use `docker-compose.jetson.sensors.yaml` to run radar and camera sensor nodes:
```sh
# Start containers in the background
docker compose -f docker-compose.jetson.sensors.yaml up -d

# Enter sensors container shell
docker compose -f docker-compose.jetson.sensors.yaml exec ros_dev_radar bash

# Stop and remove containers
docker compose -f docker-compose.jetson.sensors.yaml down
```

### YOLO Object Detection Container

Use `docker-compose.jetson.ObjDetection.yaml` to run YOLO object detection:
```sh
# Start YOLO container
docker compose -f docker-compose.jetson.ObjDetection.yaml up -d

# Enter container shell
docker compose -f docker-compose.jetson.ObjDetection.yaml exec ros_dev_yolo bash

# Stop and remove container
docker compose -f docker-compose.jetson.ObjDetection.yaml down
```

---

## Repository Contents

### Services
- **ros_dev_radar**: Launches radar sensor node (`continental_ars408_socket_can.launch.xml`). Reads from CAN interface, publishing detected objects.
  - **Example Parameters**:
    - `interface`: CAN device name (`can0`)
    - `receiver_interval_sec`: CAN message timeout interval
    - `visualize_radar_markers`: Enable RViz visualization topics

- **ros_dev_cam**: Launches USB camera node using `usb_cam` package with configurable resolution, FPS etc. (see `config/params_1.yaml`).

- **ros_dev_yolo**: Runs YOLOv11 object detection using CPU inference. Configurable settings include:
  - `model`: Path to YOLO `.pt` model file (also availabe in repo at jetson_ros_ws/src/yolo_ros/models)
  - `input_image_topic`: Source camera image topic
  - `device`: CPU or GPU (`cpu` or `cuda:0`) Currently only cpu is supported
  - `threshold`, `iou`: Detection confidence and overlap settings
  - `imgsz_width`, `imgsz_height`: Input image dimensions

---

## ROS2 Topics

### Camera Topics
- `/camera1/camera_info`
- `/camera1/compressedDepth` *(depth camera required)*
- `/camera1/image_compressed`
- `/camera1/image_raw`

### CAN Topics
- `/from_can_bus`

### Radar Topics
- `/radar_objects_raw`
- `/radar_scan_raw`
- `/radar_state`
- `/radar_markers` *(RViz visualization)*

### YOLO Topics
- `/yolo/dbg_image`: Image with bounding boxes
- `/yolo/detections`: Object detection results

---

## References
- [ARS408 Driver](https://github.com/tier4/ars408_driver)
- [USB Camera Driver](https://github.com/ros-drivers/usb_cam)
- [YOLO ROS](https://github.com/mgonzs13/yolo_ros/tree/main)
- [ROS2 V4L2 Camera](https://index.ros.org/r/v4l2_camera/#humble)
- [ROS2 SocketCAN](https://github.com/autowarefoundation/ros2_socketcan)

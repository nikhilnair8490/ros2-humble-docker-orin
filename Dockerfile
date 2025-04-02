# Description: This file is used to create a custom image for ROS2 development on Jetson Orin Nano
# The image is based on the official ROS2 image for Humble + more tools for development
# The image is intended to be used with the Jetson Orin Nano with Jetpack 6.2
# Version: 1.0
# Author: Nikhil Nair
# Created: 2025-03-01

# https://hub.docker.com/r/arm64v8/ros/tags?name=humble
FROM arm64v8/ros:humble-ros-base-jammy

RUN apt-get update

# Install some tools for development
#RUN apt-get update \
RUN apt-get install -y \
nano \
# Install iproute2 package for ip command (For Radar CAN)
iproute2 \
# install can-utils package for can commands (For Radar CAN)
can-utils \
# Install python3 (for YOLO)
python3 \
# Install python3-pip package for pip3 command (For YOLO)
python3-pip \
# Clean up the apt cache to reduce image size
&& rm -rf /var/lib/apt/lists/* 

# Install ROS 2 development tools
RUN apt-get update && apt-get install -y \
#RUN apt-get install -y \
#ros-humble-desktop \ 
ros-dev-tools \
&& rm -rf /var/lib/apt/lists/*

# Create a non-root user to use for development and regular use
ARG USERNAME=ros_jetson
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Add user in the group
RUN groupadd --gid $USER_GID $USERNAME \
    # Add a new user with specified username, user ID, and group ID, and set their default shell to bash
    && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
    # Add user to video group to access camera devices
    && usermod -aG video $USERNAME

# Set up sudo for the user to run commands as root
RUN apt-get update \
    # Install sudo package
    && apt-get install -y sudo \
    # Allow the user to execute any command as root without a password
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    # Set the correct permissions for the sudoers file
    && chmod 0440 /etc/sudoers.d/$USERNAME \
    # Clean up the apt cache to reduce image size
    && rm -rf /var/lib/apt/lists/*

# Copy the entrypoint and bashrc scripts so we have 
# our container's environment set up correctly
COPY entrypoint.sh /
# Ensure execute permissions
RUN chmod +x /entrypoint.sh
#COPY bashrc /home/${USERNAME}/.bashrc

# Update the .bashrc file to source the ROS 2 setup files properly
RUN echo "source /opt/ros/humble/setup.bash" >> /home/${USERNAME}/.bashrc \
 && echo "source /home/${USERNAME}/docker_ros_ws/install/setup.bash" >> /home/${USERNAME}/.bashrc \
 && echo "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash" >> /home/${USERNAME}/.bashrc

RUN mkdir -p /home/${USERNAME}/docker_ros_ws/src
WORKDIR /home/${USERNAME}/docker_ros_ws
#COPY jetson_ros_ws/install /home/${USERNAME}/docker_ros_ws/install
COPY jetson_ros_ws/src /home/${USERNAME}/docker_ros_ws/src

# Ensure system knows about ROS2 sources and dependencies
RUN apt-get update && apt-get install -y curl gnupg2 lsb-release && \
    curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.key | apt-key add - && \
    echo "deb http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list && \
    apt-get update

# Install system dependencies required by PyTorch and YOLO
RUN apt-get update && apt-get install -y \
    libopenblas-dev libopenmpi-dev \
    libjpeg-dev zlib1g-dev libpython3-dev \
    && rm -rf /var/lib/apt/lists/*

# Set CUDA environment variables
ENV CUDA_HOME=/usr/local/cuda
ENV PATH=$CUDA_HOME/bin:$PATH
ENV LD_LIBRARY_PATH=$CUDA_HOME/lib64:/usr/lib/aarch64-linux-gnu/

# Install Jetson-compatible PyTorch and TorchVision (from Ultralytics)
RUN pip3 install --upgrade pip && \
    pip3 install \
    https://pypi.jetson-ai-lab.dev/jp6/cu126/+f/6cc/6ecfe8a5994fd/torch-2.6.0-cp310-cp310-linux_aarch64.whl#sha256=6cc6ecfe8a5994fd6d58fb6d6eb73ff2437428bb4953f3ebaa409f83a5f4db99 \
    https://pypi.jetson-ai-lab.dev/jp6/cu126/+f/aa2/2da8dcf4c4c8d/torchvision-0.21.0-cp310-cp310-linux_aarch64.whl#sha256=aa22da8dcf4c4c8dc897e7922b1ef25cb0fe350e1a358168be87a854ad114531 \
    https://pypi.jetson-ai-lab.dev/jp6/cu126/+f/dda/ce98dc7d89263/torchaudio-2.6.0-cp310-cp310-linux_aarch64.whl#sha256=ddace98dc7d892634d2e5b08593436f3e3b1247a1cb11c0d5f4e5ccf64a9be8c

# Add dependencies for the YOLO ROS2 package
RUN pip3 install -r src/yolo_ros/requirements.txt

# Install ONNX Runtime GPU (Jetson compatible)
RUN pip3 install https://github.com/ultralytics/assets/releases/download/v0.0.0/onnxruntime_gpu-1.20.0-cp310-cp310-linux_aarch64.whl && \
    pip3 install numpy==1.23.5  # Revert numpy to compatible version

#ENV LD_LIBRARY_PATH=/usr/lib/llvm-8/lib:$LD_LIBRARY_PATH

RUN rm -rf /root/.ros/rosdep/sources.cache
RUN rm -rf /etc/ros/rosdep/sources.list.d/20-default.list

RUN sudo rosdep init && \
    rosdep update && \
    apt-get update && \
    rosdep install --from-paths src --ignore-src -r -y

# Run colcon build to build the workspace
RUN bash -c "source /opt/ros/humble/setup.bash && colcon build"

# Set up entrypoint and default command
ENTRYPOINT ["/bin/bash", "/entrypoint.sh"]
CMD ["bash"]
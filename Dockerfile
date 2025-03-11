# Description: This file is used to create a custom image for ROS2 development on Jetson Orin Nano
# The image is based on the official ROS2 image for Humble + more tools for development
# The image is intended to be used with the Jetson Orin Nano with Jetpack 6.2
# Version: 1.0
# Author: Nikhil Nair
# Created: 2025-03-01

# https://hub.docker.com/r/arm64v8/ros/tags?name=humble
FROM arm64v8/ros:humble-ros-base-jammy

# Install some tools for development
RUN apt-get update \
&& apt-get install -y \
nano \
# Install iproute2 package for ip command
iproute2 \
# install can-utils package for can commands
can-utils \
# Clean up the apt cache to reduce image size
&& rm -rf /var/lib/apt/lists/* 

# Install ROS 2 development tools
RUN apt-get update && apt-get install -y \
ros-humble-desktop \ 
&& rm -rf /var/lib/apt/lists/*

# Create a non-root user to use for development and regular use
ARG USERNAME=ros_jetson
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Add user in the group
RUN groupadd --gid $USER_GID $USERNAME \
    # Add a new user with specified username, user ID, and group ID, and set their default shell to bash
    && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME

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
 
RUN rosdep update \
    && rosdep install --from-paths src --ignore-src -r -y

# Run colcon build to build the workspace
RUN bash -c "source /opt/ros/humble/setup.bash && colcon build"

# Set up entrypoint and default command
ENTRYPOINT ["/bin/bash", "/entrypoint.sh"]
CMD ["bash"]
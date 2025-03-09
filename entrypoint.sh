#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# Source the ROS 2 Humble setup script to set up the environment
source /opt/ros/humble/setup.bash
source /home/ros_jetson/docker_ros_ws/install/setup.bash

# Print the provided arguments to the console
echo "Provided arguments: $@"

# Explicitly set the PATH environment variable, ensuring /opt/ros/humble/bin is included
# export PATH="/opt/ros/humble/bin:$PATH"

# Execute the provided command(s) and replace the shell with the command's process
exec $@
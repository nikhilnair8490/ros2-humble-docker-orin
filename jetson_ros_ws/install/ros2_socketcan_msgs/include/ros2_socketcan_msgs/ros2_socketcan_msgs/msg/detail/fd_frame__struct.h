// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_socketcan_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#ifndef ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_H_
#define ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// data
enum
{
  ros2_socketcan_msgs__msg__FdFrame__data__MAX_SIZE = 64
};

/// Struct defined in msg/FdFrame in the package ros2_socketcan_msgs.
typedef struct ros2_socketcan_msgs__msg__FdFrame
{
  std_msgs__msg__Header header;
  uint32_t id;
  bool is_extended;
  bool is_error;
  uint8_t len;
  rosidl_runtime_c__uint8__Sequence data;
} ros2_socketcan_msgs__msg__FdFrame;

// Struct for a sequence of ros2_socketcan_msgs__msg__FdFrame.
typedef struct ros2_socketcan_msgs__msg__FdFrame__Sequence
{
  ros2_socketcan_msgs__msg__FdFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_socketcan_msgs__msg__FdFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_H_

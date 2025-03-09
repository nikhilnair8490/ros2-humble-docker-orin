// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__FRAME__STRUCT_H_
#define CAN_MSGS__MSG__DETAIL__FRAME__STRUCT_H_

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

/// Struct defined in msg/Frame in the package can_msgs.
typedef struct can_msgs__msg__Frame
{
  std_msgs__msg__Header header;
  uint32_t id;
  uint8_t dlc;
  uint8_t data[8];
  uint8_t err;
  uint8_t rtr;
  uint8_t eff;
} can_msgs__msg__Frame;

// Struct for a sequence of can_msgs__msg__Frame.
typedef struct can_msgs__msg__Frame__Sequence
{
  can_msgs__msg__Frame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_msgs__msg__Frame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_MSGS__MSG__DETAIL__FRAME__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__STRUCT_H_
#define RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__STRUCT_H_

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
// Member 'returns'
#include "radar_msgs/msg/detail/radar_return__struct.h"

/// Struct defined in msg/RadarScan in the package radar_msgs.
typedef struct radar_msgs__msg__RadarScan
{
  std_msgs__msg__Header header;
  radar_msgs__msg__RadarReturn__Sequence returns;
} radar_msgs__msg__RadarScan;

// Struct for a sequence of radar_msgs__msg__RadarScan.
typedef struct radar_msgs__msg__RadarScan__Sequence
{
  radar_msgs__msg__RadarScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_msgs__msg__RadarScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__STRUCT_H_

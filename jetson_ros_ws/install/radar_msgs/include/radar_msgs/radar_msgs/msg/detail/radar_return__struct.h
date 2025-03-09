// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_msgs:msg/RadarReturn.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__STRUCT_H_
#define RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarReturn in the package radar_msgs.
/**
  * All variables below are relative to the radar's frame of reference.
  * This message is not meant to be used alone but as part of a stamped or array message.
 */
typedef struct radar_msgs__msg__RadarReturn
{
  /// Distance (m) from the sensor to the detected return.
  float range;
  /// Angle (in radians) in the azimuth plane between the sensor and the detected return.
  /// Positive angles are anticlockwise from the sensor and negative angles clockwise from the sensor as per REP-0103.
  float azimuth;
  /// Angle (in radians) in the elevation plane between the sensor and the detected return.
  /// Negative angles are below the sensor. For 2D radar, this will be 0.
  float elevation;
  /// The doppler speed (m/s) of the return.
  float doppler_velocity;
  /// The amplitude of the return (dB).
  float amplitude;
} radar_msgs__msg__RadarReturn;

// Struct for a sequence of radar_msgs__msg__RadarReturn.
typedef struct radar_msgs__msg__RadarReturn__Sequence
{
  radar_msgs__msg__RadarReturn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_msgs__msg__RadarReturn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__STRUCT_H_

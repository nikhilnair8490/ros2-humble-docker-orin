// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from radar_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "radar_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "radar_msgs/msg/detail/radar_tracks__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace radar_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_msgs
cdr_serialize(
  const radar_msgs::msg::RadarTracks & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_msgs::msg::RadarTracks & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_msgs
get_serialized_size(
  const radar_msgs::msg::RadarTracks & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_msgs
max_serialized_size_RadarTracks(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace radar_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_msgs, msg, RadarTracks)();

#ifdef __cplusplus
}
#endif

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

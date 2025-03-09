// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__TRAITS_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_msgs/msg/detail/radar_tracks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tracks'
#include "radar_msgs/msg/detail/radar_track__traits.hpp"

namespace radar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarTracks & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tracks
  {
    if (msg.tracks.size() == 0) {
      out << "tracks: []";
    } else {
      out << "tracks: [";
      size_t pending_items = msg.tracks.size();
      for (auto item : msg.tracks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarTracks & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: tracks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracks.size() == 0) {
      out << "tracks: []\n";
    } else {
      out << "tracks:\n";
      for (auto item : msg.tracks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarTracks & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace radar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use radar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const radar_msgs::msg::RadarTracks & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_msgs::msg::RadarTracks & msg)
{
  return radar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_msgs::msg::RadarTracks>()
{
  return "radar_msgs::msg::RadarTracks";
}

template<>
inline const char * name<radar_msgs::msg::RadarTracks>()
{
  return "radar_msgs/msg/RadarTracks";
}

template<>
struct has_fixed_size<radar_msgs::msg::RadarTracks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<radar_msgs::msg::RadarTracks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<radar_msgs::msg::RadarTracks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__TRAITS_HPP_

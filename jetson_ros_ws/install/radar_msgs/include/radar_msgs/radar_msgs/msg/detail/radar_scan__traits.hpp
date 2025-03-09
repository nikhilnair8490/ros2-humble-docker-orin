// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__TRAITS_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_msgs/msg/detail/radar_scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'returns'
#include "radar_msgs/msg/detail/radar_return__traits.hpp"

namespace radar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarScan & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: returns
  {
    if (msg.returns.size() == 0) {
      out << "returns: []";
    } else {
      out << "returns: [";
      size_t pending_items = msg.returns.size();
      for (auto item : msg.returns) {
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
  const RadarScan & msg,
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

  // member: returns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.returns.size() == 0) {
      out << "returns: []\n";
    } else {
      out << "returns:\n";
      for (auto item : msg.returns) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarScan & msg, bool use_flow_style = false)
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
  const radar_msgs::msg::RadarScan & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_msgs::msg::RadarScan & msg)
{
  return radar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_msgs::msg::RadarScan>()
{
  return "radar_msgs::msg::RadarScan";
}

template<>
inline const char * name<radar_msgs::msg::RadarScan>()
{
  return "radar_msgs/msg/RadarScan";
}

template<>
struct has_fixed_size<radar_msgs::msg::RadarScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<radar_msgs::msg::RadarScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<radar_msgs::msg::RadarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__TRAITS_HPP_

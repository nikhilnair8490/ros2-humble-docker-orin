// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_msgs:msg/RadarReturn.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__TRAITS_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_msgs/msg/detail/radar_return__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarReturn & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: doppler_velocity
  {
    out << "doppler_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_velocity, out);
    out << ", ";
  }

  // member: amplitude
  {
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarReturn & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: doppler_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doppler_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_velocity, out);
    out << "\n";
  }

  // member: amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarReturn & msg, bool use_flow_style = false)
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
  const radar_msgs::msg::RadarReturn & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_msgs::msg::RadarReturn & msg)
{
  return radar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_msgs::msg::RadarReturn>()
{
  return "radar_msgs::msg::RadarReturn";
}

template<>
inline const char * name<radar_msgs::msg::RadarReturn>()
{
  return "radar_msgs/msg/RadarReturn";
}

template<>
struct has_fixed_size<radar_msgs::msg::RadarReturn>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_msgs::msg::RadarReturn>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_msgs::msg::RadarReturn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__TRAITS_HPP_

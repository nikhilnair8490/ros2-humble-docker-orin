// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_msgs:msg/RadarReturn.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__BUILDER_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_msgs/msg/detail/radar_return__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarReturn_amplitude
{
public:
  explicit Init_RadarReturn_amplitude(::radar_msgs::msg::RadarReturn & msg)
  : msg_(msg)
  {}
  ::radar_msgs::msg::RadarReturn amplitude(::radar_msgs::msg::RadarReturn::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_msgs::msg::RadarReturn msg_;
};

class Init_RadarReturn_doppler_velocity
{
public:
  explicit Init_RadarReturn_doppler_velocity(::radar_msgs::msg::RadarReturn & msg)
  : msg_(msg)
  {}
  Init_RadarReturn_amplitude doppler_velocity(::radar_msgs::msg::RadarReturn::_doppler_velocity_type arg)
  {
    msg_.doppler_velocity = std::move(arg);
    return Init_RadarReturn_amplitude(msg_);
  }

private:
  ::radar_msgs::msg::RadarReturn msg_;
};

class Init_RadarReturn_elevation
{
public:
  explicit Init_RadarReturn_elevation(::radar_msgs::msg::RadarReturn & msg)
  : msg_(msg)
  {}
  Init_RadarReturn_doppler_velocity elevation(::radar_msgs::msg::RadarReturn::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_RadarReturn_doppler_velocity(msg_);
  }

private:
  ::radar_msgs::msg::RadarReturn msg_;
};

class Init_RadarReturn_azimuth
{
public:
  explicit Init_RadarReturn_azimuth(::radar_msgs::msg::RadarReturn & msg)
  : msg_(msg)
  {}
  Init_RadarReturn_elevation azimuth(::radar_msgs::msg::RadarReturn::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_RadarReturn_elevation(msg_);
  }

private:
  ::radar_msgs::msg::RadarReturn msg_;
};

class Init_RadarReturn_range
{
public:
  Init_RadarReturn_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarReturn_azimuth range(::radar_msgs::msg::RadarReturn::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RadarReturn_azimuth(msg_);
  }

private:
  ::radar_msgs::msg::RadarReturn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_msgs::msg::RadarReturn>()
{
  return radar_msgs::msg::builder::Init_RadarReturn_range();
}

}  // namespace radar_msgs

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__BUILDER_HPP_

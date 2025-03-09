// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_msgs/msg/detail/radar_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarScan_returns
{
public:
  explicit Init_RadarScan_returns(::radar_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  ::radar_msgs::msg::RadarScan returns(::radar_msgs::msg::RadarScan::_returns_type arg)
  {
    msg_.returns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_header
{
public:
  Init_RadarScan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarScan_returns header(::radar_msgs::msg::RadarScan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarScan_returns(msg_);
  }

private:
  ::radar_msgs::msg::RadarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_msgs::msg::RadarScan>()
{
  return radar_msgs::msg::builder::Init_RadarScan_header();
}

}  // namespace radar_msgs

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_

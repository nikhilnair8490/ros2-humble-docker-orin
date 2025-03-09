// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_socketcan_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#ifndef ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__BUILDER_HPP_
#define ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_socketcan_msgs/msg/detail/fd_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_socketcan_msgs
{

namespace msg
{

namespace builder
{

class Init_FdFrame_data
{
public:
  explicit Init_FdFrame_data(::ros2_socketcan_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  ::ros2_socketcan_msgs::msg::FdFrame data(::ros2_socketcan_msgs::msg::FdFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_socketcan_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_len
{
public:
  explicit Init_FdFrame_len(::ros2_socketcan_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_data len(::ros2_socketcan_msgs::msg::FdFrame::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_FdFrame_data(msg_);
  }

private:
  ::ros2_socketcan_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_is_error
{
public:
  explicit Init_FdFrame_is_error(::ros2_socketcan_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_len is_error(::ros2_socketcan_msgs::msg::FdFrame::_is_error_type arg)
  {
    msg_.is_error = std::move(arg);
    return Init_FdFrame_len(msg_);
  }

private:
  ::ros2_socketcan_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_is_extended
{
public:
  explicit Init_FdFrame_is_extended(::ros2_socketcan_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_is_error is_extended(::ros2_socketcan_msgs::msg::FdFrame::_is_extended_type arg)
  {
    msg_.is_extended = std::move(arg);
    return Init_FdFrame_is_error(msg_);
  }

private:
  ::ros2_socketcan_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_id
{
public:
  explicit Init_FdFrame_id(::ros2_socketcan_msgs::msg::FdFrame & msg)
  : msg_(msg)
  {}
  Init_FdFrame_is_extended id(::ros2_socketcan_msgs::msg::FdFrame::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FdFrame_is_extended(msg_);
  }

private:
  ::ros2_socketcan_msgs::msg::FdFrame msg_;
};

class Init_FdFrame_header
{
public:
  Init_FdFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FdFrame_id header(::ros2_socketcan_msgs::msg::FdFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FdFrame_id(msg_);
  }

private:
  ::ros2_socketcan_msgs::msg::FdFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_socketcan_msgs::msg::FdFrame>()
{
  return ros2_socketcan_msgs::msg::builder::Init_FdFrame_header();
}

}  // namespace ros2_socketcan_msgs

#endif  // ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__FRAME__BUILDER_HPP_
#define CAN_MSGS__MSG__DETAIL__FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_msgs/msg/detail/frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_msgs
{

namespace msg
{

namespace builder
{

class Init_Frame_eff
{
public:
  explicit Init_Frame_eff(::can_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  ::can_msgs::msg::Frame eff(::can_msgs::msg::Frame::_eff_type arg)
  {
    msg_.eff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

class Init_Frame_rtr
{
public:
  explicit Init_Frame_rtr(::can_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_eff rtr(::can_msgs::msg::Frame::_rtr_type arg)
  {
    msg_.rtr = std::move(arg);
    return Init_Frame_eff(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

class Init_Frame_err
{
public:
  explicit Init_Frame_err(::can_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_rtr err(::can_msgs::msg::Frame::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_Frame_rtr(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

class Init_Frame_data
{
public:
  explicit Init_Frame_data(::can_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_err data(::can_msgs::msg::Frame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Frame_err(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

class Init_Frame_dlc
{
public:
  explicit Init_Frame_dlc(::can_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_data dlc(::can_msgs::msg::Frame::_dlc_type arg)
  {
    msg_.dlc = std::move(arg);
    return Init_Frame_data(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

class Init_Frame_id
{
public:
  explicit Init_Frame_id(::can_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_dlc id(::can_msgs::msg::Frame::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Frame_dlc(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

class Init_Frame_header
{
public:
  Init_Frame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Frame_id header(::can_msgs::msg::Frame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Frame_id(msg_);
  }

private:
  ::can_msgs::msg::Frame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_msgs::msg::Frame>()
{
  return can_msgs::msg::builder::Init_Frame_header();
}

}  // namespace can_msgs

#endif  // CAN_MSGS__MSG__DETAIL__FRAME__BUILDER_HPP_

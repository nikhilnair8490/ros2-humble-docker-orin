// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__BUILDER_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_msgs/msg/detail/radar_tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarTracks_tracks
{
public:
  explicit Init_RadarTracks_tracks(::radar_msgs::msg::RadarTracks & msg)
  : msg_(msg)
  {}
  ::radar_msgs::msg::RadarTracks tracks(::radar_msgs::msg::RadarTracks::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_msgs::msg::RadarTracks msg_;
};

class Init_RadarTracks_header
{
public:
  Init_RadarTracks_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarTracks_tracks header(::radar_msgs::msg::RadarTracks::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarTracks_tracks(msg_);
  }

private:
  ::radar_msgs::msg::RadarTracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_msgs::msg::RadarTracks>()
{
  return radar_msgs::msg::builder::Init_RadarTracks_header();
}

}  // namespace radar_msgs

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_TRACKS__BUILDER_HPP_

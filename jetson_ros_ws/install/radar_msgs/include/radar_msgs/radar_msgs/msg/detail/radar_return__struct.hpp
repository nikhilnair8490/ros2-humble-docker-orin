// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_msgs:msg/RadarReturn.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__STRUCT_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_msgs__msg__RadarReturn __attribute__((deprecated))
#else
# define DEPRECATED__radar_msgs__msg__RadarReturn __declspec(deprecated)
#endif

namespace radar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarReturn_
{
  using Type = RadarReturn_<ContainerAllocator>;

  explicit RadarReturn_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->doppler_velocity = 0.0f;
      this->amplitude = 0.0f;
    }
  }

  explicit RadarReturn_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->doppler_velocity = 0.0f;
      this->amplitude = 0.0f;
    }
  }

  // field types and members
  using _range_type =
    float;
  _range_type range;
  using _azimuth_type =
    float;
  _azimuth_type azimuth;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _doppler_velocity_type =
    float;
  _doppler_velocity_type doppler_velocity;
  using _amplitude_type =
    float;
  _amplitude_type amplitude;

  // setters for named parameter idiom
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__azimuth(
    const float & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__doppler_velocity(
    const float & _arg)
  {
    this->doppler_velocity = _arg;
    return *this;
  }
  Type & set__amplitude(
    const float & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_msgs::msg::RadarReturn_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_msgs::msg::RadarReturn_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_msgs::msg::RadarReturn_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_msgs::msg::RadarReturn_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_msgs__msg__RadarReturn
    std::shared_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_msgs__msg__RadarReturn
    std::shared_ptr<radar_msgs::msg::RadarReturn_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarReturn_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->doppler_velocity != other.doppler_velocity) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarReturn_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarReturn_

// alias to use template instance with default allocator
using RadarReturn =
  radar_msgs::msg::RadarReturn_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_msgs

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_RETURN__STRUCT_HPP_

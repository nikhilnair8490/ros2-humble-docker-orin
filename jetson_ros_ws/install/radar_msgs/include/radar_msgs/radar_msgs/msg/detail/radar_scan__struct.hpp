// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__STRUCT_HPP_
#define RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'returns'
#include "radar_msgs/msg/detail/radar_return__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_msgs__msg__RadarScan __attribute__((deprecated))
#else
# define DEPRECATED__radar_msgs__msg__RadarScan __declspec(deprecated)
#endif

namespace radar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarScan_
{
  using Type = RadarScan_<ContainerAllocator>;

  explicit RadarScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RadarScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _returns_type =
    std::vector<radar_msgs::msg::RadarReturn_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<radar_msgs::msg::RadarReturn_<ContainerAllocator>>>;
  _returns_type returns;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__returns(
    const std::vector<radar_msgs::msg::RadarReturn_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<radar_msgs::msg::RadarReturn_<ContainerAllocator>>> & _arg)
  {
    this->returns = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_msgs::msg::RadarScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_msgs::msg::RadarScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_msgs::msg::RadarScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_msgs::msg::RadarScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_msgs__msg__RadarScan
    std::shared_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_msgs__msg__RadarScan
    std::shared_ptr<radar_msgs::msg::RadarScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarScan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->returns != other.returns) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarScan_

// alias to use template instance with default allocator
using RadarScan =
  radar_msgs::msg::RadarScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_msgs

#endif  // RADAR_MSGS__MSG__DETAIL__RADAR_SCAN__STRUCT_HPP_

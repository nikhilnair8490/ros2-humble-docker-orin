// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_socketcan_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#ifndef ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_HPP_
#define ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ros2_socketcan_msgs__msg__FdFrame __attribute__((deprecated))
#else
# define DEPRECATED__ros2_socketcan_msgs__msg__FdFrame __declspec(deprecated)
#endif

namespace ros2_socketcan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FdFrame_
{
  using Type = FdFrame_<ContainerAllocator>;

  explicit FdFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->is_extended = false;
      this->is_error = false;
      this->len = 0;
    }
  }

  explicit FdFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->is_extended = false;
      this->is_error = false;
      this->len = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _is_extended_type =
    bool;
  _is_extended_type is_extended;
  using _is_error_type =
    bool;
  _is_error_type is_error;
  using _len_type =
    uint8_t;
  _len_type len;
  using _data_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 64, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__is_extended(
    const bool & _arg)
  {
    this->is_extended = _arg;
    return *this;
  }
  Type & set__is_error(
    const bool & _arg)
  {
    this->is_error = _arg;
    return *this;
  }
  Type & set__len(
    const uint8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__data(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 64, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_socketcan_msgs__msg__FdFrame
    std::shared_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_socketcan_msgs__msg__FdFrame
    std::shared_ptr<ros2_socketcan_msgs::msg::FdFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FdFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->is_extended != other.is_extended) {
      return false;
    }
    if (this->is_error != other.is_error) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FdFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FdFrame_

// alias to use template instance with default allocator
using FdFrame =
  ros2_socketcan_msgs::msg::FdFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_socketcan_msgs

#endif  // ROS2_SOCKETCAN_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_HPP_

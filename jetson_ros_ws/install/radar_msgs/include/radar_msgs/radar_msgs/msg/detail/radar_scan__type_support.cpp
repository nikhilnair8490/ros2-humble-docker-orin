// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from radar_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "radar_msgs/msg/detail/radar_scan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace radar_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RadarScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) radar_msgs::msg::RadarScan(_init);
}

void RadarScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<radar_msgs::msg::RadarScan *>(message_memory);
  typed_message->~RadarScan();
}

size_t size_function__RadarScan__returns(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<radar_msgs::msg::RadarReturn> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarScan__returns(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<radar_msgs::msg::RadarReturn> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarScan__returns(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<radar_msgs::msg::RadarReturn> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarScan__returns(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const radar_msgs::msg::RadarReturn *>(
    get_const_function__RadarScan__returns(untyped_member, index));
  auto & value = *reinterpret_cast<radar_msgs::msg::RadarReturn *>(untyped_value);
  value = item;
}

void assign_function__RadarScan__returns(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<radar_msgs::msg::RadarReturn *>(
    get_function__RadarScan__returns(untyped_member, index));
  const auto & value = *reinterpret_cast<const radar_msgs::msg::RadarReturn *>(untyped_value);
  item = value;
}

void resize_function__RadarScan__returns(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<radar_msgs::msg::RadarReturn> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RadarScan_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_msgs::msg::RadarScan, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "returns",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<radar_msgs::msg::RadarReturn>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_msgs::msg::RadarScan, returns),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarScan__returns,  // size() function pointer
    get_const_function__RadarScan__returns,  // get_const(index) function pointer
    get_function__RadarScan__returns,  // get(index) function pointer
    fetch_function__RadarScan__returns,  // fetch(index, &value) function pointer
    assign_function__RadarScan__returns,  // assign(index, value) function pointer
    resize_function__RadarScan__returns  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RadarScan_message_members = {
  "radar_msgs::msg",  // message namespace
  "RadarScan",  // message name
  2,  // number of fields
  sizeof(radar_msgs::msg::RadarScan),
  RadarScan_message_member_array,  // message members
  RadarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RadarScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RadarScan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace radar_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<radar_msgs::msg::RadarScan>()
{
  return &::radar_msgs::msg::rosidl_typesupport_introspection_cpp::RadarScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, radar_msgs, msg, RadarScan)() {
  return &::radar_msgs::msg::rosidl_typesupport_introspection_cpp::RadarScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_socketcan_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_socketcan_msgs/msg/detail/fd_frame__rosidl_typesupport_introspection_c.h"
#include "ros2_socketcan_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_socketcan_msgs/msg/detail/fd_frame__functions.h"
#include "ros2_socketcan_msgs/msg/detail/fd_frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_socketcan_msgs__msg__FdFrame__init(message_memory);
}

void ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_fini_function(void * message_memory)
{
  ros2_socketcan_msgs__msg__FdFrame__fini(message_memory);
}

size_t ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__size_function__FdFrame__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__get_const_function__FdFrame__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__get_function__FdFrame__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__fetch_function__FdFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__get_const_function__FdFrame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__assign_function__FdFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__get_function__FdFrame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__resize_function__FdFrame__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_socketcan_msgs__msg__FdFrame, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_socketcan_msgs__msg__FdFrame, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_extended",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_socketcan_msgs__msg__FdFrame, is_extended),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_socketcan_msgs__msg__FdFrame, is_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_socketcan_msgs__msg__FdFrame, len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    64,  // array size
    true,  // is upper bound
    offsetof(ros2_socketcan_msgs__msg__FdFrame, data),  // bytes offset in struct
    NULL,  // default value
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__size_function__FdFrame__data,  // size() function pointer
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__get_const_function__FdFrame__data,  // get_const(index) function pointer
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__get_function__FdFrame__data,  // get(index) function pointer
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__fetch_function__FdFrame__data,  // fetch(index, &value) function pointer
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__assign_function__FdFrame__data,  // assign(index, value) function pointer
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__resize_function__FdFrame__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_members = {
  "ros2_socketcan_msgs__msg",  // message namespace
  "FdFrame",  // message name
  6,  // number of fields
  sizeof(ros2_socketcan_msgs__msg__FdFrame),
  ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_member_array,  // message members
  ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_type_support_handle = {
  0,
  &ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_socketcan_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_socketcan_msgs, msg, FdFrame)() {
  ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_type_support_handle.typesupport_identifier) {
    ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_socketcan_msgs__msg__FdFrame__rosidl_typesupport_introspection_c__FdFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

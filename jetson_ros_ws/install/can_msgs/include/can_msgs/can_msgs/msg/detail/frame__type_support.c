// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from can_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "can_msgs/msg/detail/frame__rosidl_typesupport_introspection_c.h"
#include "can_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "can_msgs/msg/detail/frame__functions.h"
#include "can_msgs/msg/detail/frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  can_msgs__msg__Frame__init(message_memory);
}

void can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_fini_function(void * message_memory)
{
  can_msgs__msg__Frame__fini(message_memory);
}

size_t can_msgs__msg__Frame__rosidl_typesupport_introspection_c__size_function__Frame__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * can_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_const_function__Frame__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * can_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_function__Frame__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void can_msgs__msg__Frame__rosidl_typesupport_introspection_c__fetch_function__Frame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_const_function__Frame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void can_msgs__msg__Frame__rosidl_typesupport_introspection_c__assign_function__Frame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_function__Frame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_msgs__msg__Frame, header),  // bytes offset in struct
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
    offsetof(can_msgs__msg__Frame, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dlc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_msgs__msg__Frame, dlc),  // bytes offset in struct
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
    8,  // array size
    false,  // is upper bound
    offsetof(can_msgs__msg__Frame, data),  // bytes offset in struct
    NULL,  // default value
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__size_function__Frame__data,  // size() function pointer
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_const_function__Frame__data,  // get_const(index) function pointer
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_function__Frame__data,  // get(index) function pointer
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__fetch_function__Frame__data,  // fetch(index, &value) function pointer
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__assign_function__Frame__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_msgs__msg__Frame, err),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_msgs__msg__Frame, rtr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_msgs__msg__Frame, eff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_members = {
  "can_msgs__msg",  // message namespace
  "Frame",  // message name
  7,  // number of fields
  sizeof(can_msgs__msg__Frame),
  can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_member_array,  // message members
  can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_init_function,  // function to initialize message memory (memory has to be allocated)
  can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle = {
  0,
  &can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_can_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_msgs, msg, Frame)() {
  can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle.typesupport_identifier) {
    can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &can_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

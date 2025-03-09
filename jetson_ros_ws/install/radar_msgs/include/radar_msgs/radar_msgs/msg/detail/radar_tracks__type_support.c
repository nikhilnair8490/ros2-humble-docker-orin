// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_msgs/msg/detail/radar_tracks__rosidl_typesupport_introspection_c.h"
#include "radar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_msgs/msg/detail/radar_tracks__functions.h"
#include "radar_msgs/msg/detail/radar_tracks__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tracks`
#include "radar_msgs/msg/radar_track.h"
// Member `tracks`
#include "radar_msgs/msg/detail/radar_track__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_msgs__msg__RadarTracks__init(message_memory);
}

void radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_fini_function(void * message_memory)
{
  radar_msgs__msg__RadarTracks__fini(message_memory);
}

size_t radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__size_function__RadarTracks__tracks(
  const void * untyped_member)
{
  const radar_msgs__msg__RadarTrack__Sequence * member =
    (const radar_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  return member->size;
}

const void * radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__get_const_function__RadarTracks__tracks(
  const void * untyped_member, size_t index)
{
  const radar_msgs__msg__RadarTrack__Sequence * member =
    (const radar_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void * radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__get_function__RadarTracks__tracks(
  void * untyped_member, size_t index)
{
  radar_msgs__msg__RadarTrack__Sequence * member =
    (radar_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__fetch_function__RadarTracks__tracks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const radar_msgs__msg__RadarTrack * item =
    ((const radar_msgs__msg__RadarTrack *)
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__get_const_function__RadarTracks__tracks(untyped_member, index));
  radar_msgs__msg__RadarTrack * value =
    (radar_msgs__msg__RadarTrack *)(untyped_value);
  *value = *item;
}

void radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__assign_function__RadarTracks__tracks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  radar_msgs__msg__RadarTrack * item =
    ((radar_msgs__msg__RadarTrack *)
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__get_function__RadarTracks__tracks(untyped_member, index));
  const radar_msgs__msg__RadarTrack * value =
    (const radar_msgs__msg__RadarTrack *)(untyped_value);
  *item = *value;
}

bool radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__resize_function__RadarTracks__tracks(
  void * untyped_member, size_t size)
{
  radar_msgs__msg__RadarTrack__Sequence * member =
    (radar_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  radar_msgs__msg__RadarTrack__Sequence__fini(member);
  return radar_msgs__msg__RadarTrack__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_msgs__msg__RadarTracks, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_msgs__msg__RadarTracks, tracks),  // bytes offset in struct
    NULL,  // default value
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__size_function__RadarTracks__tracks,  // size() function pointer
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__get_const_function__RadarTracks__tracks,  // get_const(index) function pointer
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__get_function__RadarTracks__tracks,  // get(index) function pointer
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__fetch_function__RadarTracks__tracks,  // fetch(index, &value) function pointer
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__assign_function__RadarTracks__tracks,  // assign(index, value) function pointer
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__resize_function__RadarTracks__tracks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_members = {
  "radar_msgs__msg",  // message namespace
  "RadarTracks",  // message name
  2,  // number of fields
  sizeof(radar_msgs__msg__RadarTracks),
  radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array,  // message members
  radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_init_function,  // function to initialize message memory (memory has to be allocated)
  radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle = {
  0,
  &radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_msgs, msg, RadarTracks)() {
  radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_msgs, msg, RadarTrack)();
  if (!radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle.typesupport_identifier) {
    radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &radar_msgs__msg__RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

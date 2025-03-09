// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice
#include "radar_msgs/msg/detail/radar_track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
radar_msgs__msg__RadarTrack__init(radar_msgs__msg__RadarTrack * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    radar_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    radar_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    radar_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    radar_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    radar_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // classification
  // position_covariance
  // velocity_covariance
  // acceleration_covariance
  // size_covariance
  return true;
}

void
radar_msgs__msg__RadarTrack__fini(radar_msgs__msg__RadarTrack * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // classification
  // position_covariance
  // velocity_covariance
  // acceleration_covariance
  // size_covariance
}

bool
radar_msgs__msg__RadarTrack__are_equal(const radar_msgs__msg__RadarTrack * lhs, const radar_msgs__msg__RadarTrack * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // velocity_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->velocity_covariance[i] != rhs->velocity_covariance[i]) {
      return false;
    }
  }
  // acceleration_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->acceleration_covariance[i] != rhs->acceleration_covariance[i]) {
      return false;
    }
  }
  // size_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->size_covariance[i] != rhs->size_covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
radar_msgs__msg__RadarTrack__copy(
  const radar_msgs__msg__RadarTrack * input,
  radar_msgs__msg__RadarTrack * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // classification
  output->classification = input->classification;
  // position_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // velocity_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->velocity_covariance[i] = input->velocity_covariance[i];
  }
  // acceleration_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->acceleration_covariance[i] = input->acceleration_covariance[i];
  }
  // size_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->size_covariance[i] = input->size_covariance[i];
  }
  return true;
}

radar_msgs__msg__RadarTrack *
radar_msgs__msg__RadarTrack__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarTrack * msg = (radar_msgs__msg__RadarTrack *)allocator.allocate(sizeof(radar_msgs__msg__RadarTrack), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_msgs__msg__RadarTrack));
  bool success = radar_msgs__msg__RadarTrack__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_msgs__msg__RadarTrack__destroy(radar_msgs__msg__RadarTrack * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_msgs__msg__RadarTrack__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_msgs__msg__RadarTrack__Sequence__init(radar_msgs__msg__RadarTrack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarTrack * data = NULL;

  if (size) {
    data = (radar_msgs__msg__RadarTrack *)allocator.zero_allocate(size, sizeof(radar_msgs__msg__RadarTrack), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_msgs__msg__RadarTrack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_msgs__msg__RadarTrack__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
radar_msgs__msg__RadarTrack__Sequence__fini(radar_msgs__msg__RadarTrack__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_msgs__msg__RadarTrack__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

radar_msgs__msg__RadarTrack__Sequence *
radar_msgs__msg__RadarTrack__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarTrack__Sequence * array = (radar_msgs__msg__RadarTrack__Sequence *)allocator.allocate(sizeof(radar_msgs__msg__RadarTrack__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_msgs__msg__RadarTrack__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_msgs__msg__RadarTrack__Sequence__destroy(radar_msgs__msg__RadarTrack__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_msgs__msg__RadarTrack__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_msgs__msg__RadarTrack__Sequence__are_equal(const radar_msgs__msg__RadarTrack__Sequence * lhs, const radar_msgs__msg__RadarTrack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_msgs__msg__RadarTrack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_msgs__msg__RadarTrack__Sequence__copy(
  const radar_msgs__msg__RadarTrack__Sequence * input,
  radar_msgs__msg__RadarTrack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_msgs__msg__RadarTrack);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_msgs__msg__RadarTrack * data =
      (radar_msgs__msg__RadarTrack *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_msgs__msg__RadarTrack__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_msgs__msg__RadarTrack__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_msgs__msg__RadarTrack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

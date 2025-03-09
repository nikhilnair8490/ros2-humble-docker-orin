// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice
#include "radar_msgs/msg/detail/radar_tracks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tracks`
#include "radar_msgs/msg/detail/radar_track__functions.h"

bool
radar_msgs__msg__RadarTracks__init(radar_msgs__msg__RadarTracks * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_msgs__msg__RadarTracks__fini(msg);
    return false;
  }
  // tracks
  if (!radar_msgs__msg__RadarTrack__Sequence__init(&msg->tracks, 0)) {
    radar_msgs__msg__RadarTracks__fini(msg);
    return false;
  }
  return true;
}

void
radar_msgs__msg__RadarTracks__fini(radar_msgs__msg__RadarTracks * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracks
  radar_msgs__msg__RadarTrack__Sequence__fini(&msg->tracks);
}

bool
radar_msgs__msg__RadarTracks__are_equal(const radar_msgs__msg__RadarTracks * lhs, const radar_msgs__msg__RadarTracks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tracks
  if (!radar_msgs__msg__RadarTrack__Sequence__are_equal(
      &(lhs->tracks), &(rhs->tracks)))
  {
    return false;
  }
  return true;
}

bool
radar_msgs__msg__RadarTracks__copy(
  const radar_msgs__msg__RadarTracks * input,
  radar_msgs__msg__RadarTracks * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tracks
  if (!radar_msgs__msg__RadarTrack__Sequence__copy(
      &(input->tracks), &(output->tracks)))
  {
    return false;
  }
  return true;
}

radar_msgs__msg__RadarTracks *
radar_msgs__msg__RadarTracks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarTracks * msg = (radar_msgs__msg__RadarTracks *)allocator.allocate(sizeof(radar_msgs__msg__RadarTracks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_msgs__msg__RadarTracks));
  bool success = radar_msgs__msg__RadarTracks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_msgs__msg__RadarTracks__destroy(radar_msgs__msg__RadarTracks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_msgs__msg__RadarTracks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_msgs__msg__RadarTracks__Sequence__init(radar_msgs__msg__RadarTracks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarTracks * data = NULL;

  if (size) {
    data = (radar_msgs__msg__RadarTracks *)allocator.zero_allocate(size, sizeof(radar_msgs__msg__RadarTracks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_msgs__msg__RadarTracks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_msgs__msg__RadarTracks__fini(&data[i - 1]);
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
radar_msgs__msg__RadarTracks__Sequence__fini(radar_msgs__msg__RadarTracks__Sequence * array)
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
      radar_msgs__msg__RadarTracks__fini(&array->data[i]);
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

radar_msgs__msg__RadarTracks__Sequence *
radar_msgs__msg__RadarTracks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarTracks__Sequence * array = (radar_msgs__msg__RadarTracks__Sequence *)allocator.allocate(sizeof(radar_msgs__msg__RadarTracks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_msgs__msg__RadarTracks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_msgs__msg__RadarTracks__Sequence__destroy(radar_msgs__msg__RadarTracks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_msgs__msg__RadarTracks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_msgs__msg__RadarTracks__Sequence__are_equal(const radar_msgs__msg__RadarTracks__Sequence * lhs, const radar_msgs__msg__RadarTracks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_msgs__msg__RadarTracks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_msgs__msg__RadarTracks__Sequence__copy(
  const radar_msgs__msg__RadarTracks__Sequence * input,
  radar_msgs__msg__RadarTracks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_msgs__msg__RadarTracks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_msgs__msg__RadarTracks * data =
      (radar_msgs__msg__RadarTracks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_msgs__msg__RadarTracks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_msgs__msg__RadarTracks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_msgs__msg__RadarTracks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

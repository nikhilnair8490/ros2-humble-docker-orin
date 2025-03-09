// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_msgs:msg/RadarReturn.idl
// generated code does not contain a copyright notice
#include "radar_msgs/msg/detail/radar_return__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_msgs__msg__RadarReturn__init(radar_msgs__msg__RadarReturn * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // azimuth
  // elevation
  // doppler_velocity
  // amplitude
  return true;
}

void
radar_msgs__msg__RadarReturn__fini(radar_msgs__msg__RadarReturn * msg)
{
  if (!msg) {
    return;
  }
  // range
  // azimuth
  // elevation
  // doppler_velocity
  // amplitude
}

bool
radar_msgs__msg__RadarReturn__are_equal(const radar_msgs__msg__RadarReturn * lhs, const radar_msgs__msg__RadarReturn * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // doppler_velocity
  if (lhs->doppler_velocity != rhs->doppler_velocity) {
    return false;
  }
  // amplitude
  if (lhs->amplitude != rhs->amplitude) {
    return false;
  }
  return true;
}

bool
radar_msgs__msg__RadarReturn__copy(
  const radar_msgs__msg__RadarReturn * input,
  radar_msgs__msg__RadarReturn * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // azimuth
  output->azimuth = input->azimuth;
  // elevation
  output->elevation = input->elevation;
  // doppler_velocity
  output->doppler_velocity = input->doppler_velocity;
  // amplitude
  output->amplitude = input->amplitude;
  return true;
}

radar_msgs__msg__RadarReturn *
radar_msgs__msg__RadarReturn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarReturn * msg = (radar_msgs__msg__RadarReturn *)allocator.allocate(sizeof(radar_msgs__msg__RadarReturn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_msgs__msg__RadarReturn));
  bool success = radar_msgs__msg__RadarReturn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_msgs__msg__RadarReturn__destroy(radar_msgs__msg__RadarReturn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_msgs__msg__RadarReturn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_msgs__msg__RadarReturn__Sequence__init(radar_msgs__msg__RadarReturn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarReturn * data = NULL;

  if (size) {
    data = (radar_msgs__msg__RadarReturn *)allocator.zero_allocate(size, sizeof(radar_msgs__msg__RadarReturn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_msgs__msg__RadarReturn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_msgs__msg__RadarReturn__fini(&data[i - 1]);
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
radar_msgs__msg__RadarReturn__Sequence__fini(radar_msgs__msg__RadarReturn__Sequence * array)
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
      radar_msgs__msg__RadarReturn__fini(&array->data[i]);
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

radar_msgs__msg__RadarReturn__Sequence *
radar_msgs__msg__RadarReturn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarReturn__Sequence * array = (radar_msgs__msg__RadarReturn__Sequence *)allocator.allocate(sizeof(radar_msgs__msg__RadarReturn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_msgs__msg__RadarReturn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_msgs__msg__RadarReturn__Sequence__destroy(radar_msgs__msg__RadarReturn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_msgs__msg__RadarReturn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_msgs__msg__RadarReturn__Sequence__are_equal(const radar_msgs__msg__RadarReturn__Sequence * lhs, const radar_msgs__msg__RadarReturn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_msgs__msg__RadarReturn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_msgs__msg__RadarReturn__Sequence__copy(
  const radar_msgs__msg__RadarReturn__Sequence * input,
  radar_msgs__msg__RadarReturn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_msgs__msg__RadarReturn);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_msgs__msg__RadarReturn * data =
      (radar_msgs__msg__RadarReturn *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_msgs__msg__RadarReturn__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_msgs__msg__RadarReturn__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_msgs__msg__RadarReturn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

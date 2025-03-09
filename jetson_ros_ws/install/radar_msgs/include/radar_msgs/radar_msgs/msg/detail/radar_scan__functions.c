// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice
#include "radar_msgs/msg/detail/radar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `returns`
#include "radar_msgs/msg/detail/radar_return__functions.h"

bool
radar_msgs__msg__RadarScan__init(radar_msgs__msg__RadarScan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_msgs__msg__RadarScan__fini(msg);
    return false;
  }
  // returns
  if (!radar_msgs__msg__RadarReturn__Sequence__init(&msg->returns, 0)) {
    radar_msgs__msg__RadarScan__fini(msg);
    return false;
  }
  return true;
}

void
radar_msgs__msg__RadarScan__fini(radar_msgs__msg__RadarScan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // returns
  radar_msgs__msg__RadarReturn__Sequence__fini(&msg->returns);
}

bool
radar_msgs__msg__RadarScan__are_equal(const radar_msgs__msg__RadarScan * lhs, const radar_msgs__msg__RadarScan * rhs)
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
  // returns
  if (!radar_msgs__msg__RadarReturn__Sequence__are_equal(
      &(lhs->returns), &(rhs->returns)))
  {
    return false;
  }
  return true;
}

bool
radar_msgs__msg__RadarScan__copy(
  const radar_msgs__msg__RadarScan * input,
  radar_msgs__msg__RadarScan * output)
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
  // returns
  if (!radar_msgs__msg__RadarReturn__Sequence__copy(
      &(input->returns), &(output->returns)))
  {
    return false;
  }
  return true;
}

radar_msgs__msg__RadarScan *
radar_msgs__msg__RadarScan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarScan * msg = (radar_msgs__msg__RadarScan *)allocator.allocate(sizeof(radar_msgs__msg__RadarScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_msgs__msg__RadarScan));
  bool success = radar_msgs__msg__RadarScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_msgs__msg__RadarScan__destroy(radar_msgs__msg__RadarScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_msgs__msg__RadarScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_msgs__msg__RadarScan__Sequence__init(radar_msgs__msg__RadarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarScan * data = NULL;

  if (size) {
    data = (radar_msgs__msg__RadarScan *)allocator.zero_allocate(size, sizeof(radar_msgs__msg__RadarScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_msgs__msg__RadarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_msgs__msg__RadarScan__fini(&data[i - 1]);
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
radar_msgs__msg__RadarScan__Sequence__fini(radar_msgs__msg__RadarScan__Sequence * array)
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
      radar_msgs__msg__RadarScan__fini(&array->data[i]);
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

radar_msgs__msg__RadarScan__Sequence *
radar_msgs__msg__RadarScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_msgs__msg__RadarScan__Sequence * array = (radar_msgs__msg__RadarScan__Sequence *)allocator.allocate(sizeof(radar_msgs__msg__RadarScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_msgs__msg__RadarScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_msgs__msg__RadarScan__Sequence__destroy(radar_msgs__msg__RadarScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_msgs__msg__RadarScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_msgs__msg__RadarScan__Sequence__are_equal(const radar_msgs__msg__RadarScan__Sequence * lhs, const radar_msgs__msg__RadarScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_msgs__msg__RadarScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_msgs__msg__RadarScan__Sequence__copy(
  const radar_msgs__msg__RadarScan__Sequence * input,
  radar_msgs__msg__RadarScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_msgs__msg__RadarScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_msgs__msg__RadarScan * data =
      (radar_msgs__msg__RadarScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_msgs__msg__RadarScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_msgs__msg__RadarScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_msgs__msg__RadarScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

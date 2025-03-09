// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_socketcan_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice
#include "ros2_socketcan_msgs/msg/detail/fd_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_socketcan_msgs__msg__FdFrame__init(ros2_socketcan_msgs__msg__FdFrame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_socketcan_msgs__msg__FdFrame__fini(msg);
    return false;
  }
  // id
  // is_extended
  // is_error
  // len
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    ros2_socketcan_msgs__msg__FdFrame__fini(msg);
    return false;
  }
  return true;
}

void
ros2_socketcan_msgs__msg__FdFrame__fini(ros2_socketcan_msgs__msg__FdFrame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // is_extended
  // is_error
  // len
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
ros2_socketcan_msgs__msg__FdFrame__are_equal(const ros2_socketcan_msgs__msg__FdFrame * lhs, const ros2_socketcan_msgs__msg__FdFrame * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // is_extended
  if (lhs->is_extended != rhs->is_extended) {
    return false;
  }
  // is_error
  if (lhs->is_error != rhs->is_error) {
    return false;
  }
  // len
  if (lhs->len != rhs->len) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
ros2_socketcan_msgs__msg__FdFrame__copy(
  const ros2_socketcan_msgs__msg__FdFrame * input,
  ros2_socketcan_msgs__msg__FdFrame * output)
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
  // id
  output->id = input->id;
  // is_extended
  output->is_extended = input->is_extended;
  // is_error
  output->is_error = input->is_error;
  // len
  output->len = input->len;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

ros2_socketcan_msgs__msg__FdFrame *
ros2_socketcan_msgs__msg__FdFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_socketcan_msgs__msg__FdFrame * msg = (ros2_socketcan_msgs__msg__FdFrame *)allocator.allocate(sizeof(ros2_socketcan_msgs__msg__FdFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_socketcan_msgs__msg__FdFrame));
  bool success = ros2_socketcan_msgs__msg__FdFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_socketcan_msgs__msg__FdFrame__destroy(ros2_socketcan_msgs__msg__FdFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_socketcan_msgs__msg__FdFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_socketcan_msgs__msg__FdFrame__Sequence__init(ros2_socketcan_msgs__msg__FdFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_socketcan_msgs__msg__FdFrame * data = NULL;

  if (size) {
    data = (ros2_socketcan_msgs__msg__FdFrame *)allocator.zero_allocate(size, sizeof(ros2_socketcan_msgs__msg__FdFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_socketcan_msgs__msg__FdFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_socketcan_msgs__msg__FdFrame__fini(&data[i - 1]);
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
ros2_socketcan_msgs__msg__FdFrame__Sequence__fini(ros2_socketcan_msgs__msg__FdFrame__Sequence * array)
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
      ros2_socketcan_msgs__msg__FdFrame__fini(&array->data[i]);
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

ros2_socketcan_msgs__msg__FdFrame__Sequence *
ros2_socketcan_msgs__msg__FdFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_socketcan_msgs__msg__FdFrame__Sequence * array = (ros2_socketcan_msgs__msg__FdFrame__Sequence *)allocator.allocate(sizeof(ros2_socketcan_msgs__msg__FdFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_socketcan_msgs__msg__FdFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_socketcan_msgs__msg__FdFrame__Sequence__destroy(ros2_socketcan_msgs__msg__FdFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_socketcan_msgs__msg__FdFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_socketcan_msgs__msg__FdFrame__Sequence__are_equal(const ros2_socketcan_msgs__msg__FdFrame__Sequence * lhs, const ros2_socketcan_msgs__msg__FdFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_socketcan_msgs__msg__FdFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_socketcan_msgs__msg__FdFrame__Sequence__copy(
  const ros2_socketcan_msgs__msg__FdFrame__Sequence * input,
  ros2_socketcan_msgs__msg__FdFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_socketcan_msgs__msg__FdFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_socketcan_msgs__msg__FdFrame * data =
      (ros2_socketcan_msgs__msg__FdFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_socketcan_msgs__msg__FdFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_socketcan_msgs__msg__FdFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_socketcan_msgs__msg__FdFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

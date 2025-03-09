// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_msgs:msg/Frame.idl
// generated code does not contain a copyright notice
#include "can_msgs/msg/detail/frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
can_msgs__msg__Frame__init(can_msgs__msg__Frame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    can_msgs__msg__Frame__fini(msg);
    return false;
  }
  // id
  // dlc
  // data
  // err
  // rtr
  // eff
  return true;
}

void
can_msgs__msg__Frame__fini(can_msgs__msg__Frame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // dlc
  // data
  // err
  // rtr
  // eff
}

bool
can_msgs__msg__Frame__are_equal(const can_msgs__msg__Frame * lhs, const can_msgs__msg__Frame * rhs)
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
  // dlc
  if (lhs->dlc != rhs->dlc) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // err
  if (lhs->err != rhs->err) {
    return false;
  }
  // rtr
  if (lhs->rtr != rhs->rtr) {
    return false;
  }
  // eff
  if (lhs->eff != rhs->eff) {
    return false;
  }
  return true;
}

bool
can_msgs__msg__Frame__copy(
  const can_msgs__msg__Frame * input,
  can_msgs__msg__Frame * output)
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
  // dlc
  output->dlc = input->dlc;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  // err
  output->err = input->err;
  // rtr
  output->rtr = input->rtr;
  // eff
  output->eff = input->eff;
  return true;
}

can_msgs__msg__Frame *
can_msgs__msg__Frame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_msgs__msg__Frame * msg = (can_msgs__msg__Frame *)allocator.allocate(sizeof(can_msgs__msg__Frame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_msgs__msg__Frame));
  bool success = can_msgs__msg__Frame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_msgs__msg__Frame__destroy(can_msgs__msg__Frame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_msgs__msg__Frame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_msgs__msg__Frame__Sequence__init(can_msgs__msg__Frame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_msgs__msg__Frame * data = NULL;

  if (size) {
    data = (can_msgs__msg__Frame *)allocator.zero_allocate(size, sizeof(can_msgs__msg__Frame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_msgs__msg__Frame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_msgs__msg__Frame__fini(&data[i - 1]);
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
can_msgs__msg__Frame__Sequence__fini(can_msgs__msg__Frame__Sequence * array)
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
      can_msgs__msg__Frame__fini(&array->data[i]);
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

can_msgs__msg__Frame__Sequence *
can_msgs__msg__Frame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_msgs__msg__Frame__Sequence * array = (can_msgs__msg__Frame__Sequence *)allocator.allocate(sizeof(can_msgs__msg__Frame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_msgs__msg__Frame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_msgs__msg__Frame__Sequence__destroy(can_msgs__msg__Frame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_msgs__msg__Frame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_msgs__msg__Frame__Sequence__are_equal(const can_msgs__msg__Frame__Sequence * lhs, const can_msgs__msg__Frame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_msgs__msg__Frame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_msgs__msg__Frame__Sequence__copy(
  const can_msgs__msg__Frame__Sequence * input,
  can_msgs__msg__Frame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_msgs__msg__Frame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_msgs__msg__Frame * data =
      (can_msgs__msg__Frame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_msgs__msg__Frame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_msgs__msg__Frame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_msgs__msg__Frame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

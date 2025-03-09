# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ros2_socketcan_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ros2_socketcan_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ros2_socketcan_FOUND FALSE)
  elseif(NOT ros2_socketcan_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ros2_socketcan_FOUND FALSE)
  endif()
  return()
endif()
set(_ros2_socketcan_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ros2_socketcan_FIND_QUIETLY)
  message(STATUS "Found ros2_socketcan: 1.3.0 (${ros2_socketcan_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ros2_socketcan' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ros2_socketcan_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ros2_socketcan_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${ros2_socketcan_DIR}/${_extra}")
endforeach()

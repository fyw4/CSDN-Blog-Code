cmake_minimum_required(VERSION 3.5)

project(TEST)

message(STATUS "PROJECT_SOURCE_DIR " ${PROJECT_SOURCE_DIR})
message(STATUS "PROJECT_BINARY_DIR " ${PROJECT_BINARY_DIR})

set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)

configure_file (
  "${PROJECT_SOURCE_DIR}/build.h.in"
  "${PROJECT_BINARY_DIR}/build.h"
  )

aux_source_directory(. DIR_SRCS)

add_executable(${PROJECT_NAME} ${DIR_SRCS})
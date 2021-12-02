CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
 
PROJECT(TEST)
 
option(TEST "test affect to code" OFF) 
 
if(TEST)
	message("TEST is defined,vlaue:${TEST}")
	add_definitions(-DTEST_DEBUG)
else()
	message("TEST is not defined")
endif()

ADD_EXECUTABLE(TEST main.cpp)
 
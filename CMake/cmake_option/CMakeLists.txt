CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
 
PROJECT(TEST)
 
if(TEST)
	message("TEST is defined,vlaue:${TEST}")
else()
	message("TEST is not defined")
endif()
 
option(TEST "test affect to code" ON) 
 
ADD_EXECUTABLE(TEST main.cpp)
 
if(TEST)
	message("TEST is defined,vlaue:${TEST}")
else()
	message("TEST is not defined")
endif()
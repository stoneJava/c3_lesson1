cmake_minimum_required(VERSION 3.5)
project(c3_lesson1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c3_lesson1 ${SOURCE_FILES})
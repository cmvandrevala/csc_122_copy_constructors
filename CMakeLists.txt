cmake_minimum_required(VERSION 3.15)

project("Copy Constructors")

set (CMAKE_CXX_STANDARD 14)

add_executable(1_default_copy_constructor 1_default_copy_constructor.cpp)
add_executable(2_shallow_copy_constructor 2_shallow_copy_constructor.cpp)
add_executable(3_deep_copy_constructor 3_deep_copy_constructor.cpp)
add_executable(4_copy_and_swap 4_copy_and_swap.cpp)

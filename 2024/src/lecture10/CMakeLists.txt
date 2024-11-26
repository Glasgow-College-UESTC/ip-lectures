cmake_minimum_required(VERSION 3.29)
project(lecture10 C)

set(CMAKE_C_STANDARD 11)

add_executable(input_overflow input_overflow.c)
add_executable(input_dynamic input_dynamic.c)
add_executable(struct_sizeof struct_sizeof.c)

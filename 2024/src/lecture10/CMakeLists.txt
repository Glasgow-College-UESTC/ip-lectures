cmake_minimum_required(VERSION 3.29)
project(lecture10 C)

set(CMAKE_C_STANDARD 11)

add_executable(input_overflow input_overflow.c)
add_executable(input_dynamic input_dynamic.c)
add_executable(struct_sizeof struct_sizeof.c)
add_executable(ip_address ip_address.c)
add_executable(strtok_example strtok_example.c)
add_executable(lexicographic_order lexicographic_order.c)

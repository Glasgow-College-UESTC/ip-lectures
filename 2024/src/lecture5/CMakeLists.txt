cmake_minimum_required(VERSION 3.29)
project(lecture5 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

add_executable(while_loop_example while_loop_example.c)
add_executable(infinite_loop_example infinite_loop_example.c)
add_executable(infinite_loop_example_for infinite_loop_example_for.c)
add_executable(quiz_problem quiz_problem.c)
add_executable(table_of_cubes table_of_cubes.c)
add_executable(prime_test prime_test.c)

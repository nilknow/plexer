cmake_minimum_required(VERSION 3.17)
project(plexer)

set(CMAKE_C_STANDARD 99)

add_executable(scanner scanner.c)
add_executable(analysis analysis.c scanner.cpp)

cmake_minimum_required(VERSION 3.13.4)
project(chapter_6)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS "-std=c11 -Wall -Wextra -Wpedantic -pedantic -Werror")

add_executable(ch6_1 ch6_1.c)
add_executable(ch6_2 ch6_2.c)
add_executable(ch6_3 ch6_3.c)
add_executable(ch6_4 ch6_4.c)

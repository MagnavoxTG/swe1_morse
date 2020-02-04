cmake_minimum_required(VERSION 3.15)
project(morse C)

set(CMAKE_C_STANDARD 99)

add_executable(morse ascii2morse.c morse2signal.c signal2hardware.c)
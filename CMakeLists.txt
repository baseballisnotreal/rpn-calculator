cmake_minimum_required(VERSION 3.11)
project(ps4 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ps4
        main.c
        node.c
        node.h
        rpn.c
        rpn.h
        stack.c
        stack.h)

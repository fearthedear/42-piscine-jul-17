cmake_minimum_required(VERSION 3.7)
project(BSQ)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        bsq.h
        find_biggest.c
        jason_main.c
        main.c
        Makefile
        transform_array.c)

add_executable(BSQ ${SOURCE_FILES})
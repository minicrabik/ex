cmake_minimum_required(VERSION 3.26)
project(ex C)

set(CMAKE_C_STANDARD 11)

add_executable(ex main.c
        task/task.c)

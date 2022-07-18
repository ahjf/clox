cmake_minimum_required(VERSION 3.22)
project(clox C)

set(CMAKE_C_STANDARD 99)

add_executable(clox main.c chunk.c debug.c memory.c value.h value.c vm.h vm.c compiler.h compiler.c scanner.h scanner.c object.h object.c table.h table.c)

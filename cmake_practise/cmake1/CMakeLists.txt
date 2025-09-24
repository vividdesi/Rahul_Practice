cmake_minimum_required(VERSION 3.10)

#project name and language used
project(hello_cmake C)

#C standard
set(CMAKE_C_STANDARD 11)

add_executable(yoctotutor src/hello.c)


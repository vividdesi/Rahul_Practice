cmake_minimum_required(VERSION 3.10)

project(cmake3 C)

set(CMAKE_C_STANDARD 11)

set(SRC
	src/add.c
	src/sub.c
	src/multi.c
	include/math.h
	test/app.c
	)

add_executable(app ${SRC})

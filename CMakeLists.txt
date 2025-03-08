cmake_minimum_required(VERSION 3.29)
project(To_Do_List)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(To_Do_List
    functions.h
    main.cpp)

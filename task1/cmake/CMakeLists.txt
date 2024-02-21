cmake_minimum_required(VERSION 3.3)

if(double)
    add_definitions(-DALOHA)
endif()

add_executable(main main.cpp)
add_definitions(-lm)


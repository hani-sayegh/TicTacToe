cmake_minimum_required(VERSION 2.8.4)
project(TicTac)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Board.h Board.cpp Computer.cpp Computer.h)
add_executable(TicTac ${SOURCE_FILES})
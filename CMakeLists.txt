cmake_minimum_required(VERSION 3.6)
project(AirlineReservation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES AirlineManagement.cpp)

add_executable(AirlineReservation ${SOURCE_FILES})
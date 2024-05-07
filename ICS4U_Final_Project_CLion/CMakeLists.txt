cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 23)

add_executable(main.cpp
        Plane.cpp
        Flight.h
        Flight.cpp
        Customer.h
        Customer.cpp
        Seat.cpp
        Seat.h
        Plane.h
        main.cpp)

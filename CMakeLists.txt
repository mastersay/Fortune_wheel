cmake_minimum_required(VERSION 3.21)
project(Fortune_wheel)

set(CMAKE_CXX_STANDARD 17)

add_executable(Fortune_wheel main.cpp timer.cpp timer.h game_preparation.cpp game_preparation.h Animations.cpp Animations.h)

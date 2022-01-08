cmake_minimum_required(VERSION 3.21)
project(Fortune_wheel)

set(CMAKE_CXX_STANDARD 17)

add_executable(Fortune_wheel main.cpp timer.cpp timer.h game_preparation.cpp game_preparation.h Animations.cpp Animations.h pick_from_json.cpp pick_from_json.h random.cpp random.h show_question.cpp show_question.h Answer_questions.cpp Answer_questions.h)
include_directories(Dependencies Questions)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Questions DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
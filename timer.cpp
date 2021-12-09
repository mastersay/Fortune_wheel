//
// Created by japru on 08/12/2021.
//

#include "timer.h"
#include <iostream>
#include <chrono>

Timer::Timer() {
    start_point = std::chrono::high_resolution_clock::now();
}

Timer::~Timer() {
    stop();
}

void Timer::stop() {
    auto end_point = std::chrono::high_resolution_clock::now();
    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_point).time_since_epoch().count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_point).time_since_epoch().count();
    auto us = end - start;
    double ms = (double) us * 0.001;
    double s = ms * 0.001;
    std::cout << ms << " (" << s << ")" << std::endl;
}

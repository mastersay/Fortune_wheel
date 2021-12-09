//
// Created by japru on 08/12/2021.
//

#ifndef TIMER_H
#define TIMER_H

#include <chrono>

class Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock> start_point;
public:
    Timer();

    ~Timer();

    void stop();
};

#endif //TIMER_H

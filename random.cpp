//
// Created by japru on 13/12/2021.
//

#include "random.h"
#include <random>

unsigned int randint(unsigned int start, unsigned int end) {
    std::random_device generator;
    return generator() % (end - 1) + start;
}

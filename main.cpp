#include <iostream>
#include "timer.h"
#include "game_preparation.h"
#include "Animations.h"

int main() {
    welcome_animation();
    game_preparation();
    std::system("pause");
    return 0;
}

#include <iostream>
#include "timer.h"
#include "game_preparation.h"
#include "Animations.h"
#include "show_question.h"

int main() {
    welcome_animation();
    game_preparation();
    show_basic_question();
    //show_advanced_question();
    std::system("pause");
    return 0;
}
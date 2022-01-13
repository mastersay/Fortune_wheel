#include <iostream>
#include "timer.h"
#include "game_preparation.h"
#include "Animations.h"
#include "show_question.h"
#include "Answer_questions.h"
#include "wheel_spin.h"
#include <string>
#include <vector>
int main() {
    welcome_animation();
    std::vector<Player> players;
    players = game_preparation();
    wheel_spin_animation();
//    spin(random_spin_num);
//    wheel(randint(0, 22), 1, roundover);
    //  show_basic_question();
    //  show_advanced_question();
    show_basic_question();
    std::system("pause");
    return 0;
}
//
// Created by Jakub V on 17. 12. 2021.
//

#ifndef FORTUNE_WHEEL_ANSWER_QUESTIONS_H
#define FORTUNE_WHEEL_ANSWER_QUESTIONS_H

#include <vector>
#include "game_preparation.h"

int
answer_question(std::vector<Player> *players, unsigned char rolling_player, const std::vector<std::string> &question,
                std::string *correctly_guessed);

void answer_basic_question(std::vector<std::string> vector);

void answer_advanced_question(std::vector<std::string> vector);

#endif //FORTUNE_WHEEL_ANSWER_QUESTIONS_H

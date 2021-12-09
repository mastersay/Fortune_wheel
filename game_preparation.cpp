//
// Created by japru on 09/12/2021.
//

#include "game_preparation.h"
#include <iostream>

unsigned char get_players_amount() {
    std::cout << "How many players wants to play? (2-6): ";
    std::string players_amount_input;
    while (std::cin >> players_amount_input &&
           (players_amount_input.size() != 1 || 50 > players_amount_input[0] || players_amount_input[0] > 54)) {
        std::cout << "Wrong number try again: ";
    }
    return players_amount_input[0];
}

void game_preparation() {
    std::cout << get_players_amount();
}
//
// Created by japru on 09/12/2021.
//

#include "game_preparation.h"
#include <iostream>
#include "Animations.h"

unsigned char get_players_amount() {
    how_many_players_animation();
    std::string players_amount_input;
    while (std::cin >> players_amount_input &&
           (players_amount_input.size() != 1 || 50 > players_amount_input[0] || players_amount_input[0] > 54)) {
        wrong_number_animation();
    }
    return players_amount_input[0];
}

void game_preparation() {
    std::cout << get_players_amount();
}
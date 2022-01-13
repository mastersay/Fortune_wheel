//
// Created by japru on 09/12/2021.
//

#include "game_preparation.h"
#include "Animations.h"
#include <iostream>
#include <vector>

Player::Player(unsigned char number_of_player) {
    player_number = number_of_player;
}

unsigned char get_players_amount() {
    how_many_players_animation();
    std::string players_amount_input;
    while (std::cin >> players_amount_input &&
           (players_amount_input.size() != 1 || 50 > players_amount_input[0] || players_amount_input[0] > 54)) {
        wrong_number_animation();
        how_many_players_animation();
    }
    return players_amount_input[0];
}

std::vector<Player> game_preparation() {
    std::vector<Player> players;
    unsigned char player_amount = get_players_amount() + 1;
    for (unsigned char i = 49; i != player_amount; i++)
        players.emplace_back(Player(i));
    return players;
}
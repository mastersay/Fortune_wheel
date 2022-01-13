//
// Created by japru on 09/12/2021.
//

#ifndef FORTUNE_WHEEL_GAME_PREPARATION_H
#define FORTUNE_WHEEL_GAME_PREPARATION_H

#include <vector>

class Player {
public:
    [[maybe_unused]] unsigned char player_number;
    [[maybe_unused]] unsigned int saved_money = 0, round_money = 0;

    explicit Player(unsigned char number_of_player);
};

std::vector<Player> game_preparation();

#endif //FORTUNE_WHEEL_GAME_PREPARATION_H

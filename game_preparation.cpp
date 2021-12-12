//
// Created by japru on 09/12/2021.
//

#include "game_preparation.h"
#include <iostream>

void how_many_players_animation(){
    for(int i=0;i<20;i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I------------------------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I How many players would you like to have (2-6)? I" << std::endl;
    std::cout << "   I   <>   I   V------------------------------------------------I" <<  std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}

void wrong_number_animation(){
    for(int i=0;i<20;i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I---------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I Wrong number! Please try again. I" << std::endl;
    std::cout << "   I   <>   I   V---------------------------------I" <<  std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}

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
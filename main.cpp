#include <iostream>
#include "timer.h"
#include "game_preparation.h"
#include "Animations.h"
#include "show_question.h"
#include "Answer_questions.h"
#include "wheel_spin.h"
#include <istream>
#include <string>
#include <algorithm>
#include "random.h"

int main() {
//    welcome_animation(); // DONE
    std::vector<Player> players = game_preparation(); // DONE
    unsigned char rolling_player = 49, round = 49;
    auto game_status = [&rolling_player, &round, &players] {
        std::cout << "Current round " << round << "\nNow is rolling player number " << rolling_player << std::endl;
        std::cout << "Your current money is: " << players[rolling_player - 49].round_money << std::endl;
    };
    for (unsigned char i = 0; i != 3; i++) {
        std::string correctly_guessed = "";
        std::vector<std::string> question = show_basic_question();
        auto round_check = [&correctly_guessed, question] {
            for (char q: question[1]) {
                if (correctly_guessed.find(q) == std::string::npos)
                    return true;
            }
            return false;
        };
//        while(!( std::all_of(question[1].begin(), question[1].end(),
//                    [correctly_guessed](char q) { return correctly_guessed.find(q) == std::string::npos; }))){
        while (round_check()) {
            if (rolling_player - 48 > players.size()) {
                rolling_player -= players.size();
            }
            game_status();
            std::cout << "(press enter to roll!)";
            std::string roll;
            std::cin.ignore();
            std::getline(std::cin, roll);
            roll.clear();
            wheel_spin_animation();
            show_question_with_letter(correctly_guessed, question);
            game_status();
            unsigned int money = randint(0, 25);
            std::cout << "You rolled " << money << std::endl;
            if (money == 0) {
                players[rolling_player - 49].round_money = 0;
                std::cout << "You bankrupt\n";
                rolling_player += 1;
            } else {
                int answer_bool = answer_question(&players, rolling_player, question, &correctly_guessed);
                rolling_player += answer_bool;
                if (answer_bool == 0) {
                    if (correctly_guessed != question[1]) {
                        std::cout << "player " << rolling_player << "is getting " << money
                                  << " for letter within the table"
                                  << std::endl;
                    }
                    players[rolling_player - 49].round_money += money;
                }
            }
        }
        std::cout << "player " << rolling_player << " is getting 50 for solving the table" << std::endl;
        players[rolling_player - 49].round_money += 50;
        round++;
    }

    std::system("pause");
    return 0;
}
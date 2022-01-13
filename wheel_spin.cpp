//
// Created by 1conc on 11. 1. 2022.
//

#include <iostream>
//#include <cstdlib>
#include "random.h"
#include "wheel_spin.h"

//random number generator for spin (0-21)
unsigned int spin(int& random_spin_num) {
    random_spin_num= (int) randint(0, 22);
    return random_spin_num;
}

//randomized number from generator in use
void wheel(int random_spin_num, int& total_money, bool& roundover) {
    if (random_spin_num == 0) {
        std::cout << "-*- Bankruptcy! -*-" << std::endl;
        std::cout << "Number 0 has been dialed. You have no money left, so you lose!" << std::endl;
        total_money = 0;
        roundover = true;
    }
    else if (random_spin_num == 21) {
        std::cout << "-*- Joker! -*-" << std::endl;
        std::cout << "Number 21 has been dialed. You leave your money without a move!" << std::endl;
        roundover = true;
    }
    else if ((random_spin_num > 0) && (random_spin_num < 21)) {
        std::cout << "Number " << random_spin_num << " has been dialed" << std::endl;
        roundover = false;
    }
}

/*
void hint(std::vector<std::string> question, char help_request, int& total_money, char letters[20]){
    std::cout << "Need hint?[y/n]";
    std::cin >> help_request;
    if (help_request == 'y' && total_money > 10){
        total_money = total_money - 10;

        int question_size = question.length();
        random_letter= (int) randint(0, question_size);
        std::cout << letters[random_letter] << " ";
        continue;
    }
}
 */
//
// Created by Jakub V on 17. 12. 2021.
//
#include <iostream>
#include <vector>
#include <string>
#include "pick_from_json.h"
#include "show_question.h"
#include "wheel_spin.h"
#include "Animations.h"
#include "game_preparation.h"

void show_question_with_letter(std::string correctly_guessed, std::vector<std::string> question) {
    std::cout << "********************************" << std::endl;
    std::cout << "Advanced question topic is: " << question[0] << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << "Table is:\n";
    for (char letter_in_question: question[1]) {
        if (correctly_guessed.find(letter_in_question) != std::string::npos) {
            std::cout << letter_in_question << " ";
        } else if (letter_in_question != ' ')
            std::cout << "_ ";
        else { std::cout << "  "; }
    }
    std::cout << std::endl;
}

std::string consonants = "BCDFGHJKLMNPQRSTVWXYZ";
std::string vowels = "AEIOUY";

int
answer_question(std::vector<Player> *players, unsigned char rolling_player, const std::vector<std::string> &question,
                std::string *correctly_guessed) {
    std::cout << "type your letter or solution: ";
    std::string letter;
    while (std::getline(std::cin, letter) && letter.size() != 1 ||
           (consonants.find((char) toupper(letter[0])) == std::string::npos &&
            vowels.find((char) toupper(letter[0])) == std::string::npos)) {
        if (letter == question[1]) {
            *correctly_guessed = question[1];
            return 0;
        }
        std::cout << "wrong\ntype your letter or solution:";
    }
    if (letter == question[1]) {
        return 0;
    }
    if ((*correctly_guessed).find(letter[0]) != std::string::npos) {
        std::cout << letter[0] << " <- already in table, next player\n";
        return 1;
    }
    if (vowels.find((char) toupper(letter[0])) != std::string::npos) {
        if ((*players)[rolling_player - 49].round_money >= 6) {
            std::cout << "You bought vowel for 6, your current money is "
                      << (*players)[rolling_player - 49].round_money << std::endl;
            if (question[1].find(letter[0]) != std::string::npos) {
                *correctly_guessed += letter[0];
                show_question_with_letter(*correctly_guessed, question);
            } else {
                std::cout << letter[0] << " <- is not in table" << std::endl;
                return 1;
            }
        } else {
            std::cout << "You don't have enough money, pick consonant or solve the table: ";
            letter.clear();
            while (std::getline(std::cin, letter) && (letter.size() != question[1].size()) && ((letter.size() != 1) ||
                                                                                               (consonants.find(
                                                                                                       (char) toupper(
                                                                                                               letter[0])) ==
                                                                                                std::string::npos))) {
                if (letter == question[1]) {
                    return 0;
                }
                std::cout << "Wrong\ntype your consonant or solve the table:";
            }
            if (letter == question[1]) {
                *correctly_guessed = question[1];
                return 0;
            }
            if (question[1].find(letter[0]) != std::string::npos) {
                *correctly_guessed += letter[0];
                show_question_with_letter(*correctly_guessed, question);
            } else {
                std::cout << letter[0] << " <- is not in table" << std::endl;
                return 1;
            }
        }
    } else {
        if (question[1].find(letter[0]) != std::string::npos) {
            *correctly_guessed += letter[0];
            show_question_with_letter(*correctly_guessed, question);
        } else {
            std::cout << letter[0] << " <- is not in table" << std::endl;
            return 1;
        }
    }
    return 0;
}

void answer_basic_question(std::vector<std::string> question, int total_money, int random_spin_num, bool roundover) {
    int a = 0;
    int b = 0;
    while (b == 0) {
        int c = 0;
        char letters[20];
        char letter_answer;
        std::cout << std::endl;
        std::cout << "Your letter: ";
        std::cin >> letter_answer;
        std::cout << std::endl;
        letters[a] = letter_answer;
        a++;
        int nic = 2;
        for (char letter: question[1]) {
            int a = 1;
            if (letter == letter_answer)
                c = 1;
            for (int i = 0; i < 21; i++) {
                if (letter == letters[i]) {
                    std::cout << letters[i] << " ";
                    a = 2;
                    total_money = total_money + random_spin_num;
                    std::cout << "Correct letter! Current credit: " << total_money;
                    wheel_spin_animation();
                    spin(random_spin_num);
                    wheel(random_spin_num, total_money, roundover);
                } else
                    continue;
            }
            if (a == 1) {
                if (letter != ' ')
                    std::cout << "_ ";
                else { std::cout << "  "; }
                nic = 1;
            }
        }
        if (c == 0) {
            std::cout << std::endl;
            std::cout << "This letter is not it the table!" << std::endl;
            b = 1;
        }
        if (nic == 2) {
            std::cout << std::endl;
            std::cout << "Congrats! You guessed the word correctly!" << std::endl;
        }

    }
}

void answer_advanced_question(std::vector<std::string> question) {
    int a = 0;
    int b = 0;
    while (b == 0) {
        int c = 0;
        char letters[20];
        char letter_answer;
        std::cout << std::endl;
        std::cout << "Your letter: ";
        std::cin >> letter_answer;
        std::cout << std::endl;
        letters[a] = letter_answer;
        a++;
        int nic = 2;
        for (char letter: question[1]) {
            int a = 1;
            if (letter == letter_answer)
                c = 1;
            for (int i = 0; i < 21; i++) {
                if (letter == letters[i]) {
                    std::cout << letters[i] << " ";
                    a = 2;
                } else
                    continue;
            }
            if (a == 1) {
                if (letter != ' ')
                    std::cout << "_ ";
                else { std::cout << "  "; }
                nic = 1;
            }
        }
        if (c == 0) {
            std::cout << std::endl;
            std::cout << "This letter is not it the table!" << std::endl;
            b = 1;
        }
        if (nic == 2) {
            std::cout << std::endl;
            std::cout << "Congrats! You guessed the word correctly!" << std::endl;
        }

    }
}
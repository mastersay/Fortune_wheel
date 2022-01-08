//
// Created by Jakub V on 17. 12. 2021.
//
#include <iostream>
#include <vector>
#include <string>
#include "pick_from_json.h"
#include "show_question.h"

void answer_basic_question(std::vector<std::string> question) {
    char letters[20];
    char letter_answer;
    int a = 0;
    std::cout << std::endl;
    std::cout << "Your letter: ";
    std::cin >> letter_answer;
    std::cout << std::endl;
    for (char letter: question[1]) {
        if(letter == letter_answer) {
            std::cout << letter_answer << " ";
            letters[a] = letter_answer;
        }
        else if(letter == letters[a]){
            std::cout << letters[a] << " ";
            a = a + 1;
        }
        else if (letter != ' ')
            std::cout << "_ ";
        else {std::cout << "  ";}
    }
}
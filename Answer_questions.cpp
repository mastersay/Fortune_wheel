//
// Created by Jakub V on 17. 12. 2021.
//
#include <iostream>
#include <vector>
#include <string>
#include "pick_from_json.h"
#include "show_question.h"

void answer_basic_question(std::vector<std::string> question) {
        int a = 0;
        int b = 0;
        while(b == 0) {
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
                if(letter == letter_answer)
                    c = 1;
                for(int i = 0;i < 21;i++){
                    if(letter == letters[i]){
                        std::cout << letters[i] << " ";
                        a = 2;
                    }
                    else
                        continue;
                }
                if(a == 1){
                    if (letter != ' ')
                        std::cout << "_ ";
                    else{std::cout << "  ";}
                    nic = 1;
                }
            }
            if(c == 0){
                std::cout << std::endl;
                std::cout << "This letter is not it the table!" << std::endl;
                b = 1;
            }
            if (nic == 2){
                std::cout << std::endl;
                std::cout << "Congrats! You guessed the word correctly!" << std::endl;
            }

        }
}

void answer_advanced_question(std::vector<std::string> question) {
    int a = 0;
    int b = 0;
    while(b == 0) {
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
            if(letter == letter_answer)
                c = 1;
            for(int i = 0;i < 21;i++){
                if(letter == letters[i]){
                    std::cout << letters[i] << " ";
                    a = 2;
                }
                else
                    continue;
            }
            if(a == 1){
                if (letter != ' ')
                    std::cout << "_ ";
                else{std::cout << "  ";}
                nic = 1;
            }
        }
        if(c == 0){
            std::cout << std::endl;
            std::cout << "This letter is not it the table!" << std::endl;
            b = 1;
        }
        if (nic == 2){
            std::cout << std::endl;
            std::cout << "Congrats! You guessed the word correctly!" << std::endl;
        }

    }
}
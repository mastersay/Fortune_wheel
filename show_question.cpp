//
// Created by japru on 15/12/2021.
//

#include "show_question.h"
#include "pick_from_json.h"
#include <iostream>
#include <vector>
#include <string>
#include "Answer_questions.h"

//func for multiplying strings
//std::string operator*(const std::string &s, size_t n) {
//    std::string result;
//    result.reserve(s.size() * n);
//    for (size_t i = 0; i < n; ++i) {
//        result += s;
//    }
//    return result;
//}

void show_basic_question() {
    std::vector<std::string> question = pick_questions(
            "basic_questions"); // returns vector with hint(first element) for table(second element)
    std::cout << "********************************" << std::endl;
    std::cout << "Question topic is: " << question[0] << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << "Table is:\n";
    for (char letter: question[1]) {
        if (letter != ' ')
            std::cout << "_ ";
        else { std::cout << "  "; }
    }
    std::cout << std::endl;
    answer_basic_question(question);
}

void show_advanced_question() {
    std::vector<std::string> question = pick_questions(
            "advanced_questions"); // returns vector with hint(first element) for table(second element)
    std::cout << "********************************" << std::endl;
    std::cout << "Advanced question topic is: " << question[0] << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << "Table is:\n";
    for (char letter: question[1]) {
        if (letter != ' ')
            std::cout << "_ ";
        else { std::cout << "  "; }
    }
    std::cout << std::endl;
    answer_advanced_question(question);
}
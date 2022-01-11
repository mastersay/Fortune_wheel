//
// Created by 1conc on 11. 1. 2022.
//
/*
#include <iostream>
#include <string>
//#include <cstdlib>
#include "random.h"
#include "wheel_spin.h"

//random number generator for spin (0-21)
int spin(int& random_spin_num) {
    random_spin_num= (int) randint(0, 22);
    return random_spin_num;
}

//randomized number from generator in use
void wheel(int random_spin_num, int& total_money, string puzzle, string& hiddenPuzzle, char& letter, bool& roundover) {
    if (random_spin_num == 0) {
        cout << "-*- Bankruptcy! -*-" << endl;
        cout << "Number 0 has been dialed. You have no money left, so you lose!" << endl;
        total_money = 0;
        roundover = true;
    }
    else if (random_spin_num == 21) {
        cout << "-*- Joker! -*-" << endl;
        cout << "Number 21 has been dialed. You leave your money without a move!" << endl;
        roundover = true;
    }
    else if ((random_spin_num > 0) && (random_spin_num < 21)) {
        cout << "Number " << random_spin_num << " has been dialed" << endl;
        roundover = false;
        //letter_guess(letter);
        //riddle_updater(hiddenPuzzle, puzzle, letter); //updates riddle with letter
        //score(puzzle, letter, random_spin_num, roundover, total_money); //checks for letter to add money
    }
}
/*
int score(int random_spin_num, ){
    if (){

    }
    return 0;
}
*/
//score refresher
/*void score(int random_spin_num,string str, char& letter, int num, bool& roundover, int& playerTotal) {
    int found = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == letter) {
            found = found + 1;
        }
    }
    playerTotal = num * found;
    cout << "Zarobil si " << found << " €. Tvoj aktuálny kredit je " << playerTotal << " €." << endl;
    if (found == 0) {
        cout << "Neuhádol si!" << endl;
        roundover = true;
    }
}*/
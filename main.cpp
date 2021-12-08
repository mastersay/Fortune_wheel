#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib> //cleaning console

using namespace std;

//gets puzzle riddle
void riddle(string& sentence) { //giving a copy name
    cout << "Zadaj slovo ako hádanku: " << endl;
    getline(cin, sentence);
    system("clear"); //clears the screen
}

//rounds and players asker !!!try is not working correctly!!!
int user_inputs(int& rounds, int& players) {
    cout << "Ahoj, víta ťa hra 'Koleso šťastia!'" << endl;
    try {
        cout << "Zadak počet kôl, ktoré sa budú hrať: ";
        cin >> rounds;
        cout << "Počet hráčov (max. 3): ";
        cin >> players;
        cin.ignore();
        if (rounds != true)
        {
            throw rounds;
        }
        else if (players != true){
            throw players;
        }
    }
    catch (int problem) {
        cout << "Niečo si zadal zle! Skús znova.";
        user_inputs(rounds, players);
    }
}

//puzzle hider
void hider(string& hidden, string str) {
    int i;
    hidden.clear();
    for (i = 0; i != str.length(); i++) {
        if (str.at(i) >= 97 || str.at(i) >= 122) {
            hidden += '-';
        }
        else if (str.at(i) >= 65 || str.at(i) >= 90) {
            hidden += '-';
        }
        else if (str.at(i) = 32) {
            hidden += ' ';
        }
    }
    cout << "Tvoje slovo je: " << hidden << endl;
}

//random number generator (0-21)
int spin(int& num) {
    srand(time(NULL));
    num = rand() % 22;
    return num;
}

//correction of guess checker
bool correction_check(string puzzle, bool& roundover) {
    string guess;
    cout << "Enter your guess: ";
    getline(cin, guess);
    //set money if correct, elif not
    if (guess == puzzle) {
        cout << "Uhádol si! Berieš peniaze ostatných hráčov" << endl;
        roundover = true;
    }
    else if (guess != puzzle) {
        cout << "Toto nebude správne slovo. Tvoje kolo prepadáva ďaľšiemu hráčovi!" << endl;
        roundover = true;
    }
}

//at the end of game-total money comparation
void winner(int& total1, int& total2, int& total3) {
    if ((total1 > total2) && (total1 > total3)) {
        cout << "Vyhrál hráč 1 s kreditom " << total1 << endl;
    }
    else if ((total2 > total1) && (total2 > total3)) {
        cout << "Vyhrál hráč 1 s kreditom " << total2 << endl;
    }
    else if ((total3 > total1) && (total3 > total2)) {
        cout << "Vyhrál hráč 1 s kreditom " << total3 << endl;
    }
}

//updates hidden riddle
void riddle_updater(string& hidden, string& str, char& letter) {
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == letter)
        {
            hidden.at(i) = letter;
        }
    }
    cout << "Slovo: " << hidden << endl;
}

//letter to char setter
void letter_guess(char& letter) {
    cout << "Hádaj písmeno: ";
    cin >> letter;
    cin.ignore();
}

//score refresher
void score(string str, char& letter, int num, bool& roundover, int& playerTotal) {
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
}

//checks random number from generator
void wheel(int num, int& playertotal, string puzzle, string& hiddenPuzzle, char& letter, bool& roundover) {
    if (num == 0) {
        cout << "Je nám to ľúto, tvoj kredit padol na " << num << ", takže bankrotuješ!" << endl;
        playertotal = 0;
        roundover = true;
    }
    else if (num == 21) {
        cout << "Padla 21. Peniaze si nechávaš bez ťahu!" << endl;
        roundover = true;
    }
    else if ((num > 0) && (num < 21)) {
        cout << "Vytočilo sa číslo " << num << endl;
        roundover = false;
        letter_guess(letter);
        riddle_updater(hiddenPuzzle, puzzle, letter); //updates hidden with letter
        score(puzzle, letter, num, roundover, playertotal); //checks for letter to add money
    }
}

//checks if player has enough money to buy vowel (removes 10 dollars if true)
void buying_vowel_checker(int& playertotal, string puzzle, string& hiddenPuzzle, char& letter) {
    if (playertotal >= 10) {
        playertotal = playertotal - 10;
        letter_guess(letter);
        riddle_updater(hiddenPuzzle, puzzle, letter);
    }
    else cout << "Nemáš dostatok finančných prostriedkov na kúpu nápovedy!" << endl;
}

//selection menu
void selection_menu(string& puzzle, string& hiddenPuzzle, char& letter, int& playertotal, int& num, bool& roundover) {
    int answer;
    bool win;
    cout << "Vyber akciu (číslo), ktorú chceš vykonať: " << endl;
    cout << "   1 - Točiť kolesom" << endl;
    cout << "   2 - Vyriešiť hádanku" << endl;
    cout << "   3 - nápoveda" << endl;
    cin >> answer;
    cin.ignore();

    //spinning wheel
    if (answer == 1) {
        spin(num);
        wheel(num, playertotal, puzzle, hiddenPuzzle, letter, roundover);
    }
        //player is solving riddle
    else if (answer == 2) {
        correction_check(puzzle, roundover);
    }
        //buying vowel (aleready checked)
    else if (answer == 3) {
        buying_vowel_checker(playertotal, puzzle, hiddenPuzzle, letter);
    }
}


//-----------------------------------------------------------------------//
int main() {
    //Gets the puzzle and the rounds and players playing
    //variables:
    int num = 0, rounds, players, roundTotal1 = 0, roundTotal2 = 0, roundTotal3 = 0, total1 = 0, total2 = 0, total3 = 0, found;
    string puzzle, hidden_puzzle;
    char vowel;
    bool roundover = false, gameover = false;

    user_inputs(rounds, players);

    switch (players) {
        case 1:
            for (int i = 1; i <= rounds; i++) { //looping for amount of rounds specified

                riddle(puzzle);
                hider(hidden_puzzle, puzzle);
                do {
                    selection_menu(puzzle, hidden_puzzle, vowel, total1, num, roundover);
                } while (roundover != true);
            }
            //Compare game totals to see who has won
            winner(total1, total2, total3);
            break;
    }
    /*case 2:
        for(int i=1; i<=rounds;i++){
            riddle (puzzle); //gets puzzle string
        }
    break;
    case 3:
        for(int i=1; i<=rounds;i++){
            riddle (puzzle); //gets puzzle string
        }
    break;
    } */
    return 0;
}
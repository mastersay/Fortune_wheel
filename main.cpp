#include <iostream>
#include "timer.h"
#include "game_preparation.h"
#include "Windows.h"

void welcome_animation(){
    for(int i=0;i<20;i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I----------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I Hello and welcome to...... I" << std::endl;
    std::cout << "   I   <>   I   V----------------------------I" <<  std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
    Sleep(2000);
    for(int i=0;i<21;i++)
        std::cout << std::endl;
    std::cout << "                ******************                " << std::endl;
    std::cout << "                *WHEEL OF FORTUNE*                " << std::endl;
    std::cout << "                ******************              " << std::endl;
    std::cout << "               \\                  /           " << std::endl;
    std::cout << "                \\    ________    /          " << std::endl;
    std::cout << "                 \\  /________\\  /            " << std::endl;
    std::cout << "                  \\ I  O  O  I /             "<< std::endl;
    std::cout << "                   \\I   <>   I/              "<< std::endl;
    std::cout << "                    \\________/               " << std::endl;
    Sleep(2000);
    for(int i=0;i<20;i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I----------------------------------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I My name is FortuneBot and I will be your host for today. I" << std::endl;
    std::cout << "   I   <>   I   V----------------------------------------------------------I" <<  std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
    Sleep(3000);

}

void how_many_rounds_animation(){
    for(int i=0;i<20;i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I-----------------------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I Ok, and how many rounds are we going to play? I" << std::endl;
    std:: cout << "   I   <>   I   V-----------------------------------------------I" <<  std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}


int main() {
    welcome_animation();
    game_preparation();
    std::system("pause");
    return 0;
}

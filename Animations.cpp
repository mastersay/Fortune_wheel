//
// Created by Jakub V on 13. 12. 2021.
//

#include <iostream>
#include "Windows.h"
#include "Animations.h"
#include "random.h"

void welcome_animation() {
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I----------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I Hello and welcome to...... I" << std::endl;
    std::cout << "   I   <>   I   V----------------------------I" << std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
    Sleep(2000);
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
    std::cout << "                ******************                " << std::endl;
    std::cout << "                *WHEEL OF FORTUNE*                " << std::endl;
    std::cout << "                ******************              " << std::endl;
    std::cout << "               \\                  /           " << std::endl;
    std::cout << "                \\    ________    /          " << std::endl;
    std::cout << "                 \\  /________\\  /            " << std::endl;
    std::cout << "                  \\ I  O  O  I /             " << std::endl;
    std::cout << "                   \\I   <>   I/              " << std::endl;
    std::cout << "                    \\________/               " << std::endl;
    Sleep(2000);
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I----------------------------------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I My name is FortuneBot and I will be your host for today. I" << std::endl;
    std::cout << "   I   <>   I   V----------------------------------------------------------I" << std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
    Sleep(3000);
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
}

void how_many_players_animation() {
//    for (int i = 0; i < 20; i++)
//        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I------------------------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I How many players would you like to have (2-6)? I" << std::endl;
    std::cout << "   I   <>   I   V------------------------------------------------I" << std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}

void wrong_number_animation() {
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I---------------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I Wrong number! Please try again. I" << std::endl;
    std::cout << "   I   <>   I   V---------------------------------I" << std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}

void user_letter() {
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I-------------------------I" << std::endl;
    std::cout << "   I  O  O  I   I So your letter is: " << "A" << "    I" << std::endl;
    std::cout << "   I   <>   I   V-------------------------I" << std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}

void is_in_table() {
    for (int i = 0; i < 20; i++)
        std::cout << std::endl;
    std::cout << "    ________" << std::endl;
    std::cout << "   /________\\   I--------------------I" << std::endl;
    std::cout << "   I  O  O  I   I Is " << "A" << " in the table? I" << std::endl;
    std::cout << "   I   <>   I   V--------------------I" << std::endl;
    std::cout << "   \\________/  " << std::endl;
    std::cout << "   ----II----  " << std::endl;
    std::cout << "       II     " << std::endl;
    std::cout << "       /\\      " << std::endl;
    std::cout << "      /  \\     " << std::endl;
}

void wheel_frame_1() {
    std::cout << "                                                                                                "
              << std::endl;
    std::cout << "                                                                                                "
              << std::endl;
    std::cout << "                                           ./////                                               "
              << std::endl;
    std::cout << "                                            /////                                               "
              << std::endl;
    std::cout << "                                      /@@#   //*   &@&*                                         "
              << std::endl;
    std::cout << "                              @@@@(                       %@@@@                                 "
              << std::endl;
    std::cout << "                        .@@@         /#%%%%%%   (((((((,         @@@                            "
              << std::endl;
    std::cout << "                     @@(      #%%%%.  %%%%%%%   (((((((  .((((/      %@@                        "
              << std::endl;
    std::cout << "                 ,@@     .   %%%%%%%%%%%%%%%%   ((((((((((((((((   .     @@                     "
              << std::endl;
    std::cout << "               @@     (((((    %%%%%%%%%%%%%%   ((((((((((((((    (((((    .@@                  "
              << std::endl;
    std::cout << "             @&    */(((((((.   %%%%%%%%%%%%%   (((((((((((((   /(((((((**    @@                "
              << std::endl;
    std::cout << "           @@    ((  (((((((((   *%%%%%%%%%%%   (((((((((((.   (((((((((  ((    @@              "
              << std::endl;
    std::cout << "         @@    ((((((((((((((((    %%%%%%%%%%   ((((((((((   ,((((((((((((((((    @&            "
              << std::endl;
    std::cout << "        @/    (((((((((((((((((((   (%%%%%%%%   ((((((((,   (((((((((((((((((((    &@           "
              << std::endl;
    std::cout << "      /@          /(((((((((((((((    %%%%%%%   (((((((    (((((((((((((((/         .@.         "
              << std::endl;
    std::cout << "     (@   ,(((((.      ((((((((((((/                     (((((((((((((      *%%%%%    @.        "
              << std::endl;
    std::cout << "     @   ,((((((((((/      ((((((((      %@@@@@@@@@#     .((((((((      #%%%%%%%%%%   ,@        "
              << std::endl;
    std::cout << "    @(     .(((((((((((((      /(    &@@@@@@@@@@@@@@@@@&    (*      %%%%%%%%%%%%%.     &@       "
              << std::endl;
    std::cout << "   %@   ((/((((((((((((((((((.     @@@@@@@@@@@@@@@@@@@@@@@     *%%%%%%%%%%%%%%%%%%#%#   @,      "
              << std::endl;
    std::cout << "   @%   ((((((((((((((((((((((   /@@@@@@@@@@@@@@@@@@@@@@@@@.   %%%%%%%%%%%%%%%%%%%%%%   &@      "
              << std::endl;
    std::cout << "   @   ,(((((((((((((((((((((,   @@@@                   @@@@   #%%%%%%%%%%%%%%%%%%%%%.  /@      "
              << std::endl;
    std::cout << "   @                            &@@@@@@@@@@@@@@@@@@@@@@@@@@@/                            @      "
              << std::endl;
    std::cout << "   @   (%%%%%%%%%%%%%%%%%%%%%   /@@@@                   @@@@.  ,(((((((((((((((((((((,  .@      "
              << std::endl;
    std::cout << "   @,  .%%%%%%%%%%%%%%%%%%%%%%   @@@@@@@@@@@@@@@@@@@@@@@@@@@   ((((((((((((((((((((((   %@      "
              << std::endl;
    std::cout << "   @@   %%%%%%%%%%%%%%%%%%%%%%%   @@@@@@@@         @@@@@@@%   (((((((((((((((((((((((   @@      "
              << std::endl;
    std::cout << "    @   ,   %%%%%%%%%%%%%%%         @@@@@@@@@@@@@@@@@@@@@         (((((((((((((((      *@       "
              << std::endl;
    std::cout << "    &@   %%%%%%%%%%%%%/      (((((     @@@@@@@@@@@@@@&     (((((      /((((((((((((/   @/       "
              << std::endl;
    std::cout << "     @&   %%%%%%%%.     ,(((((((((((                    .(((((((((((.     .((((((((   @@        "
              << std::endl;
    std::cout << "      @@   #%#      (((((((((((((((   *((((,    ./%%%%.   ((((((((((((((/      (((   @@         "
              << std::endl;
    std::cout << "       @@       (((((((((((((((((.   ((((((((   %%%%%%%%   *(((((((((((((((((       @%          "
              << std::endl;
    std::cout << "        ,@,   ((((((((((((((((((   .(((((((((   %%%%%%%%%    ((((((((((((((((((   #@            "
              << std::endl;
    std::cout << "          @@    ((((((((((((((,   (((((((((((   %%%%%%%%%%#   /((((((((((((((    @&             "
              << std::endl;
    std::cout << "            @@    .  /(((((((    ((((((((((((   %%%%%%%%%%%%    (((((((,  .    @@               "
              << std::endl;
    std::cout << "              @@     ((((((/   ((((((((((((((   %%%%%%%%%%%%%(   (((((((    ,@&                 "
              << std::endl;
    std::cout << "                ,@@     ((    (((((((((((((((   %%%%%%%%%%%%%%%    ((     @@                    "
              << std::endl;
    std::cout << "                   /@@      /((((((((((((((((   %%%%%%%%%%%%%%%%/      @@.                      "
              << std::endl;
    std::cout << "                       @@@       .(.  (((((((   %%%%%%%  .#.       @@&                          "
              << std::endl;
    std::cout << "                           /@@@/                             (@@@,                              "
              << std::endl;
    std::cout << "                                  %@@@@@@(,.     .,#@@@@@@%                                     "
              << std::endl;
    std::cout << "                                                                                                "
              << std::endl;
}

void wheel_frame_2() {
    std::cout << "                                                                                                 "
              << std::endl;
    std::cout << "                                                                                                 "
              << std::endl;
    std::cout << "                                           ./////                                                "
              << std::endl;
    std::cout << "                                            /////                                                "
              << std::endl;
    std::cout << "                                      /@@#   //*   &@&*                                          "
              << std::endl;
    std::cout << "                              @@@@(                       %@@@@                                  "
              << std::endl;
    std::cout << "                        .@@@         *(((((((   %%%%%%#*        .@@@                             "
              << std::endl;
    std::cout << "                     @@(      (((((   (((((((   %%%%%%%  *%%%%(      %@@                         "
              << std::endl;
    std::cout << "                 ,@@     .   ((((((((((((((((   %%%%%%%%%%%%%%%#   .     @@                      "
              << std::endl;
    std::cout << "               @@     (((((    ((((((((((((((   %%%%%%%%%%%%%%    (((((    .@@                   "
              << std::endl;
    std::cout << "             @&    ,/(((((((.   (((((((((((((   %%%%%%%%%%%%%   /(((((((*/    @@                 "
              << std::endl;
    std::cout << "           @@    (/  (((((((((   ,(((((((((((   %%%%%%%%%%%.   (((((((((  ((    @@               "
              << std::endl;
    std::cout << "         @@    ((((((((((((((((    ((((((((((   %%%%%%%%%%   ,((((((((((((((((    @&             "
              << std::endl;
    std::cout << "        @/    (((((((((((((((((((   /((((((((   %%%%%%%%*   (((((((((((((((((((    &@            "
              << std::endl;
    std::cout << "      /@          /(((((((((((((((    (((((((   %%%%%%%    (((((((((((((((*         .@.          "
              << std::endl;
    std::cout << "     (@   *%%%%%.     .((((((((((((/                     (((((((((((((      ,(((((    @.         "
              << std::endl;
    std::cout << "     @   ,%%%%%%%%%%(      ((((((((      %@@@@@@@@@#     .((((((((      (((((((((((   .@         "
              << std::endl;
    std::cout << "    @#     /%%%%%%%%%%%%%      /(    &@@@@@@@@@@@@@@@@@&    (*      (((((((((((((      &@        "
              << std::endl;
    std::cout << "   %@   %%#%%%%%%%%%%%%%%%%%%.     @@@@@@@@@@@@@@@@@@@@@@@     ,((((((((((((((((((/((   @*       "
              << std::endl;
    std::cout << "   @&   %%%%%%%%%%%%%%%%%%%%%%   /@@@@@@@@@@@@@@@@@@@@@@@@@.   ((((((((((((((((((((((   &@       "
              << std::endl;
    std::cout << "   @   *%%%%%%%%%%%%%%%%%%%%%*   @@@@                   @@@@   /(((((((((((((((((((((.  /@       "
              << std::endl;
    std::cout << "   @                            &@@@@@@@@@@@@@@@@@@@@@@@@@@@/                            @       "
              << std::endl;
    std::cout << "   @   /(((((((((((((((((((((   *@@@@                   @@@@.  *%%%%%%%%%%%%%%%%%%%%%,  .@       "
              << std::endl;
    std::cout << "   @,   ((((((((((((((((((((((   @@@@@@@@@@@@@@@@@@@@@@@@@@@   %%%%%%%%%%%%%%%%%%%%%%   %@       "
              << std::endl;
    std::cout << "   @@   (((((((((((((((((((((((   @@@@@@@@         @@@@@@@%   %%%%%%%%%%%%%%%%%%%%%%%   @@       "
              << std::endl;
    std::cout << "    @   .   (((((((((((((((         @@@@@@@@@@@@@@@@@@@@@         %%%%%%%%%%%%%%%      *@        "
              << std::endl;
    std::cout << "    &@   (((((((((((((*      (((((     @@@@@@@@@@@@@@&     (((((      #%%%%%%%%%%%%#   @(        "
              << std::endl;
    std::cout << "     @&   ((((((((      ,(((((((((((                    .(((((((((((.     ,%%%%%%%#   @@         "
              << std::endl;
    std::cout << "      @@   (((      (((((((((((((((   (%%%%*.   .*((((.   ((((((((((((((/      %%#   @@          "
              << std::endl;
    std::cout << "       @@       (((((((((((((((((.   %%%%%%%%   ((((((((   *(((((((((((((((((       @%           "
              << std::endl;
    std::cout << "        ,@,   ((((((((((((((((((   ,%%%%%%%%%   (((((((((    ((((((((((((((((((   #@             "
              << std::endl;
    std::cout << "          @@    ((((((((((((((,   %%%%%%%%%%%   (((((((((((   /((((((((((((((    @&              "
              << std::endl;
    std::cout << "            @@       ((((((((    %%%%%%%%%%%%   ((((((((((((    (((((((.  *    @@                "
              << std::endl;
    std::cout << "              @@     ((((((/   %%%%%%%%%%%%%%   (((((((((((((/   (((((((    ,@&                  "
              << std::endl;
    std::cout << "                ,@@     ((    %%%%%%%%%%%%%%%   (((((((((((((((    ((     @@                     "
              << std::endl;
    std::cout << "                   /@@      #%%%%%%%%%%%%%%%%   ((((((((((((((((*      @@                        "
              << std::endl;
    std::cout << "                       @@@       .%   %%%%%%%   (((((((  ,(        @@&                           "
              << std::endl;
    std::cout << "                           /@@@/                             (@@@,                               "
              << std::endl;
    std::cout << "                                  %@@@@@@(,.     .,#@@@@@@%                                      "
              << std::endl;
    std::cout << "                                                                                                 "
              << std::endl;
}

int random_wheel_frame() {
    int random_num = (int) randint(1, 3);
    if (random_num == 0) {
        wheel_frame_1();
    } else if (random_num == 1) {
        wheel_frame_2();
    }

    return random_num;
}

void wheel_spin_animation() {
    int i;
    for (i = 0; i < 5; i++) {
        wheel_frame_1();
        Sleep(20);
        system("CLS");

        wheel_frame_2();
        Sleep(20);
        system("CLS");
    }

    for (i = 0; i < 4; i++) {
        wheel_frame_1();
        Sleep(100);
        system("CLS");

        wheel_frame_2();
        Sleep(100);
        system("CLS");
    }

    for (i = 0; i < 3; i++) {
        wheel_frame_1();
        Sleep(300);
        system("CLS");

        wheel_frame_2();
        Sleep(300);
        system("CLS");
    }

    for (i = 0; i < 2; i++) {
        wheel_frame_1();
        Sleep(600);
        system("CLS");

        wheel_frame_2();
        Sleep(600);
        system("CLS");
    }
    random_wheel_frame();
}

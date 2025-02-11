// RockPaperScissors2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    srand(time(0));
    int userChoice;
    bool invalidInput = true;
    int play;
    std::cout << "Welcome to the Rock Paper Scissors Computer Game! \n\n";
    std::cout << "Would you like to play? \n 1) Yes \n 2) no \n\n";
    std::cin >> play; 
    if (play == 1) {

    std::cout << "What Would you like to Choose? \n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cin >> userChoice;

    while (invalidInput) {
        if (userChoice > 3 || userChoice < 1) {
            std::cout << "This option is not on the list. You can pick either 1) Rock, 2) Paper , or 3) Scissors.\n";
        }
        else {
            invalidInput = false;
        }
    }

    while (invalidInput == false) {


        if (userChoice == 1) {
            std::cout << "You chose Rock!\n\n";
        }
        if (userChoice == 2) {
            std::cout << "You chose Paper!\n\n";
        }
        if (userChoice == 3) {
            std::cout << "You chose Scissors!\n\n";
        }

        int computerChoice = rand() % 3 + 1;

        if (computerChoice == 1) {
            std::cout << "Your opponent chose Rock!\n\n";
        }
        if (computerChoice == 2) {
            std::cout << "Your opponent chose Paper!\n\n";
        }
        if (computerChoice == 3) {
            std::cout << "Your opponent chose Scissors!\n\n";
        }

        if (computerChoice == 1 && userChoice == 3) {
            std::cout << "You Lost!\n";
        }
        if (computerChoice == 2 && userChoice == 1) {
            std::cout << "You Lost!\n";
        }
        if (computerChoice == 3 && userChoice == 2) {
            std::cout << "You Lost!\n";
        }
        if (userChoice == 1 && computerChoice == 3) {
            std::cout << "You Won!\n";
        }
        if (userChoice == 2 && computerChoice == 1) {
            std::cout << "You Won!\n";
        }
        if (userChoice == 3 && computerChoice == 2) {
            std::cout << "You Won!\n";
        }



        invalidInput = true;


        std::cout << "Would you like to play again?\n 1) Yes\n 2) No\n\n";
        std::cin >> play;
    }


    }
    if(play == 2) {
        std::cout << "Thanks for stopping by!\n";

    }
    


    return 0;
}


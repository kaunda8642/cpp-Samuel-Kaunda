// BingoINclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int continueNumber; 
    bool playBingo;
    std::cout << "Welcome to the Bingo Number Generator!\n";
    
    std::cout << "Would You like to generate a number?\n 1) Yes \n 2) No\n";
    std::cin >> continueNumber;

    if (continueNumber == 1) {
        playBingo = true;
    }
    if (continueNumber == 2) {
        playBingo = false; 
    }

    while (playBingo = true) {
        srand(time(0));
        int num = rand() % 75 + 1;
        if (num >= 1 && num <= 15) {
            std::cout << "Your number is ";
            std::cout << "B" << num << "\n";
        }
        if (num >= 16 && num <= 30) {
            std::cout << "Your number is ";
            std::cout << "I" << num << "\n";
        }
        if (num >= 31 && num <= 45) {
            std::cout << "Your number is ";
            std::cout << "N" << num << "\n";
        }
        if (num >= 46 && num <= 60) {
            std::cout << "Your number is ";
            std::cout << "G" << num << "\n";
        }
        if (num >= 61 && num <= 75) {
            std::cout << "Your number is ";
            std::cout << "O" << num << "\n";
        }

        std::cout << "Would You like to generate a number?\n 1) Yes \n 2) No\n";
        std::cin >> continueNumber;

        if (continueNumber == 1) {
            playBingo = true;
        }
        if (continueNumber == 2) {
            playBingo = false;
        }
    }
    if (playBingo = false) {
        std::cout << "Goodbye!";
    }

       return 0; 
    
    
}


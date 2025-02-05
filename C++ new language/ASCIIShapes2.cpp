// ASCIIShapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int userShapeChoice;
    int sideSize;
    std::cout << "Welcome to the ASCII Shapes Program!\n";
    std::cout << "Would you like to Print a Square(1) or a Triangle(2)\n";
    std::cin >> userShapeChoice;

    if (userShapeChoice == 1) {
        std::cout << "You chose a Square! What would you like the size of your side to be?\n";
        std::cin >> sideSize;
        for (int i = 0; i < sideSize; i++) {
            for (int j = 0; j < sideSize; j++) {
                std::cout << "* ";
            }
            std::cout << "\n";
        }
    }

    if (userShapeChoice == 2) {
        std::cout << "You chose a Triangle! What would you like the size of your size to be?\n";
        std::cin >> sideSize;
        for (int i = 0; i < sideSize; i++) {
            for (int j = 0; j < sideSize - i; j++) {
                std::cout << "* ";

            }
            std::cout << "\n";
        }

    }


}

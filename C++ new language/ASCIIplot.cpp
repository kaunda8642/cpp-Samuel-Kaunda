// ASCIIplot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int xPoint;
    int yPoint;
    int count = 0;
    std::cout << "Enter the x-coordinate you would like to plot:  ";
    std::cin >> xPoint;
    std::cout << "\nEnter the y-coordinate you would like to plot:  ";
    std::cin >> yPoint; 
    std::cout << "\n";

    std::cout << "^\n";
    while (count < yPoint + 1) {
        if (count == yPoint) {
            std::cout << "x\n";
        }
        else {
            std::cout << "|\n";
        }
        count++;
    }
    
    int count2 = 0; 
    std::cout << "+ ";
    while(count2 < xPoint +1){
        if (count2 == xPoint) {
            std::cout << "x";
        }
        else{
            std::cout << "-   ";
        }
        count2++;
    }
    std::cout << ">";

    



}



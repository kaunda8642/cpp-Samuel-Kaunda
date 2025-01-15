// ResistanceIsEverything.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
    int num1;
    int num2;
    std::cout << "Welcome to THE BEST Resistance Calculator out!\n"; 
    std::cout << "Please enter your first resistance number:  "; 
    std::cin >> num1;
    std::cout << "Please enter your second resistance number:  ";
    std::cin >> num2;
    std::cout << "Your resistance numbers are ";
    std::cout << num1;
    std::cout << " and ";
    std::cout << num2;
    std::cout << "\n If your Resistors are places in a series, they should add up to be ";
    std::cout << num1 + num2; 
    std::cout << "ohms!\n";
    std::cout << "If they are placed parallel from each other they should be ";
    double req = (1.0) / ((1.0 / num1) + (1.0 / num2));
    std::cout << req;
    std::cout << "ohms!\n";
    std::cout << "Thank you for using THE BEST Resistance Calculator out there!";
    return 0; 
    
    

}



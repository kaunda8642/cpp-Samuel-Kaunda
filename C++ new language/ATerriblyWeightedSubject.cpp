// ATerriblyWeightedSubject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int ounces;
    std::cout << "Welcome to the Ounces Converter!\n\n";
    std::cout << "How many ounces to do you have?: ";
    std::cin >> ounces; 
    std::cout << "\nYou have " << ounces << " ounces. \n";
    std::cout << "Now converting your ounces to pounds.\n\n";
    double lbs = ounces / 16;
    double leftoverOunces = ounces % 16; // this helps with the code 2 lines down 
    double decimalLeftoverOunces = leftoverOunces / 16;
    std::cout << ounces << "oz. is equivalent to " << lbs << "lbs and " << leftoverOunces << " ounces. \n"; //prints out everything in pounds asnd ounces 
    std::cout << ounces << "oz. is equivalent to " << lbs + decimalLeftoverOunces << " lbs \n\n"; // prints out everything in JUST pounds
    std::cout << "Thank you for using the Ounces Converter!";
    return 0; 


}



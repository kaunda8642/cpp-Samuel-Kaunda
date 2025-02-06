// MonogramsRUs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int main()
{
    std::string fNameInitial;
    std::string mNameInitial;
    std::string lNameInitial;
    std::cout << "Welcome to the Monogram Program\n\n";
    std::cout << "Please enter your FIRST NAME initial: \n";
    std::cin >> fNameInitial;
    std::cout << "\n\nPlease enter your MIDDLE NAME initial: \n";
    std::cin >> mNameInitial;
    std::cout << "\n\nPlease enter your LAST NAME initial: \n";
    std::cin >> lNameInitial;
    fNameInitial = std::tolower(fNameInitial.at(0));
    mNameInitial = std::toupper(mNameInitial.at(0));
    lNameInitial = std::toupper(lNameInitial.at(0));

    std::cout << "\n\nYour monogram would be: \n" << mNameInitial << "." << fNameInitial << "." << lNameInitial;

    std::cout << "\n\nThank you for using the Monogram Program!";

    return 0;
}



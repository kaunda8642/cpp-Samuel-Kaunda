// FromHereToThere2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    float pt1; //x1 value 
    float pt2; //y1 value
    float pt3; // x2 value
    float pt4; //y2 value
    std::cout << "Welcome to the 2D Distance program!\n";
    std::cout << "Please enter the X value integer for your first point: \n";
    std::cin >> pt1;
    std::cout << "Please enter the Y value integer for your first point: \n";
    std::cin >> pt2;
    std::cout << "Your first point is: \n"; //display the users desired first point 
    std::cout << pt1;
    std::cout << ", ";
    std::cout << pt2;
    std::cout << "\n";
    std::cout << "Please enter the X Value integer for your second point: \n";
    std::cin >> pt3;
    std::cout << "Please enter the Y value integer for your second point: \n";
    std::cin >> pt4;
    std::cout << "Your second point is: \n"; //display the user's desired second point 
    std::cout << pt3;
    std::cout << ", ";
    std::cout << pt4;
    float distance = sqrt(pow(pt3 - pt1, 2) + pow(pt4 - pt2, 2)); // distance formula 
    std::cout << "\n\n";
    std::cout << "Calculating Distance...\n\n";
    std::cout << "The distance between (" << pt1 << ", " << pt2 << ") and (" << pt3 << ", " << pt4 << ") is " << distance;
    return 0; 
}
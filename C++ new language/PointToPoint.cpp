// PointToPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // the integers used for our points 
    float pt1; //x1 value 
    float pt2; //y1 value
    float pt3; // x2 value
    float pt4; //y2 value
    std::cout << "Welcome to the 2D Midpoint program!\n";
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
    std::cout << "\n";
    std::cout << "Now Calculating midpoint...... \n\n";
    float Xval = (pt1 + pt3) / 2;
    float Yval = (pt2 + pt4) / 2;
    std::cout << "Your midpoint is: ";
    std::cout << Xval;
    std::cout << ", ";
    std::cout << Yval;
    std::cout << "\n\n";
    std::cout << "Thank you for using the 2D Midpoint Program!";
    return 0; 

}


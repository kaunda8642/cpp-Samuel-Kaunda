// RollingAlong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    float numDice;
    int numSides; 
    std::cout << "Welcome to the Dice Statistics Program! \n\n";
    std::cout << "How many dice are in your roll?\n";
    std::cin >> numDice; 
    std::cout << "\n How many sides are on a dice in your roll?\n\n"; 
    std::cin >> numSides; 
    std::cout << "Thank you! When rolling a " << numDice << "d" << numSides << ", your statistics will be: \n";
    float minimum = numDice;
    int maximum = numSides * numDice;
    float average = (maximum + minimum) / 2;
    std::cout << "Minimum: " << minimum << "\n";
    std::cout << "Average: " << average << "\n";
    std::cout << "Maximum: " << maximum << "\n";
    //generate a roll for each dice and then add up the results (you can use a for or while loop) 
    int count = 0;
    int rolledNum = 0; 
    while (count < numDice) { // run this code until you have rolled all of the dice. 
        srand(time(0));
        int randNum = rand() % numSides + 1; //a random number between the minimum and the maximum 
        rolledNum = rolledNum + randNum; // add that number to a total 
        count++; //add 1 to count 
    }
    std::cout << "You rolled a " << rolledNum << "!\n\n";
    std::cout << "Thank you for using the Dice Statistics Program!";

    return 0; 




}



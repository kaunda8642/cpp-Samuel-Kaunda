// ToMeetOrNotToMeet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    double numMaximum;
    double numPeople; 
    std::cout << "Welcome to the Room Capacity Program!\n";
    std::cout << "How many people can this room hold?: ";
    std::cin >> numMaximum;
    std::cout << "\nHow many people are CURRENTLY in the room?: ";
    std::cin >> numPeople; 
    double percentageUsed = (numPeople / numMaximum) * 100;
    int tenths = static_cast<int>(std::fmod(percentageUsed * 10, 10)); //find the tenths place in percentageUsed decimal 
    if (tenths >= 5) { // if the tenths place is greater than or equal to 5 
        percentageUsed = std::ceil(percentageUsed); //round up to the next whole number
    }
    else { //otherwise 
        percentageUsed = std::floor(percentageUsed); // round down to the previous whole number
    }
    std::cout << "\n\nYou have used " << percentageUsed << "% of the room's capacity. \n";
    if (numPeople <= numMaximum) {
        std::cout << "You can fit " << numMaximum - numPeople << " more people.\n\n";
        std::cout << "This meeting is LEGAL - proceed with congregation!";
    }
    else {
        std::cout << "Some people need to leave.\n\n";
        std::cout << "This meeting is ILLEGAL - you need to break it up!";
    }

    std::cout << "\n\nThank you for using the Room Capacity Program!\n\n";

    return 0; 
}



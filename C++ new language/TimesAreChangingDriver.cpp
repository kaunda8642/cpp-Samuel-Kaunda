// TimesAreChangingDriver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TimesAreChanging.h"

using namespace std;

int main() {
        int startHour, startMinute;
        int endHour, endMinute;

        
        cout << "Welcome to the Time Interval Calculation Program!" << endl;

        
        cout << "What is your first time? ";
        cin >> startHour >> startMinute;

        
        cout << "What is your second time? ";
        cin >> endHour >> endMinute;

        
        int minutes = calculate_minutes(startHour, startMinute, endHour, endMinute);

        int hours, minutesRemainder;
        calculate_hours_and_minutes(startHour, startMinute, endHour, endMinute, hours, minutesRemainder);

        double decimalHours = calculate_decimal_hours(startHour, startMinute, endHour, endMinute);

        
        cout << "\nThe time interval can be written as:" << endl;
        cout << "  * " << minutes << " minutes" << endl;
        cout << "  * " << hours << " hours and " << minutesRemainder << " minutes." << endl;
        cout << "  * " << decimalHours << " hours" << endl;

        
        cout << "\nThank you for using the Time Interval Calculation Program." << endl;

        return 0;
    }



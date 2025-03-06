// TimesAreChangingTEST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include "TimesAreChanging.h"

using namespace std;

int main() {
    // Test case 1
    int start_hour = 12, start_minute = 40;
    int end_hour = 18, end_minute = 24;

    int minutes = calculate_minutes(start_hour, start_minute, end_hour, end_minute);
    int hours, minutes_remainder;
    calculate_hours_and_minutes(start_hour, start_minute, end_hour, end_minute, hours, minutes_remainder);
    double decimal_hours = calculate_decimal_hours(start_hour, start_minute, end_hour, end_minute);

    cout << "Test 1: Time Interval from 12:40 to 18:24" << endl;
    cout << "  Minutes: " << minutes << endl;
    cout << "  Hours and Minutes: " << hours << " hours and " << minutes_remainder << " minutes." << endl;
    cout << "  Decimal Hours: " << decimal_hours << endl << endl;

    // Test case 2
    start_hour = 13; start_minute = 20;
    end_hour = 18; end_minute = 24;

    minutes = calculate_minutes(start_hour, start_minute, end_hour, end_minute);
    calculate_hours_and_minutes(start_hour, start_minute, end_hour, end_minute, hours, minutes_remainder);
    decimal_hours = calculate_decimal_hours(start_hour, start_minute, end_hour, end_minute);

    cout << "Test 2: Time Interval from 13:20 to 18:24" << endl;
    cout << "  Minutes: " << minutes << endl;
    cout << "  Hours and Minutes: " << hours << " hours and " << minutes_remainder << " minutes." << endl;
    cout << "  Decimal Hours: " << decimal_hours << endl;

    return 0;
}

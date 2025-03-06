//some function to convert my time into just minutes
#include "TimesAreChanging.h"

// Function to calculate the number of minutes between two times
int calculate_minutes(int start_hour, int start_minute, int end_hour, int end_minute) {
    int start_total_minutes = start_hour * 60 + start_minute;
    int end_total_minutes = end_hour * 60 + end_minute;
    return end_total_minutes - start_total_minutes;
}

// Function to calculate the number of hours and minutes between two times
void calculate_hours_and_minutes(int start_hour, int start_minute, int end_hour, int end_minute, int& hours, int& minutes) {
    int total_minutes = calculate_minutes(start_hour, start_minute, end_hour, end_minute);
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
}

// Function to calculate the number of hours as a decimal
double calculate_decimal_hours(int start_hour, int start_minute, int end_hour, int end_minute) {
    int total_minutes = calculate_minutes(start_hour, start_minute, end_hour, end_minute);
    return total_minutes / 60.0;
}
#pragma once
#ifndef TIMESARECHANGING_H
#define TIMESARECHANGING_H

// Function to calculate the number of minutes between two times
int calculate_minutes(int start_hour, int start_minute, int end_hour, int end_minute);

// Function to calculate the number of hours and minutes between two times
void calculate_hours_and_minutes(int start_hour, int start_minute, int end_hour, int end_minute, int& hours, int& minutes);

// Function to calculate the number of hours as a decimal
double calculate_decimal_hours(int start_hour, int start_minute, int end_hour, int end_minute);

#endif


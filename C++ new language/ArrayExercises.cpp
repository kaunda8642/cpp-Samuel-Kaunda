// ArrayExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

//QUESTION 2

double calculateAverage(int arr[], double size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }


    return (sum/size); 
}

//QUESTION 3

int findSmallest(int arr[], int size) {
    return arr[0]; 
}

//QUESTION 4
double findMedian(int arr[], int size) {

    // If the size is odd, return the middle element
    if (size % 2 != 0) {
        return arr[size / 2];
    }
    else {
        // If the size is even, return the average of the two middle elements
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
}


int main()
{
    //question 2 
    
    //int arr[] = { 3, 8, 2, 5, 7, 4 };
    //int size = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

    //double avg = calculateAverage(arr, size);
    //cout << "The average is: " << avg << endl;

    //return 0;

    //question 3 
    
    //int arr[] =  { 2, 4, 5, 8, 10, 12 };
    //int size = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

    //int smallest = findSmallest(arr, size);

    //if (smallest != -1) {
    //    cout << "The smallest number is: " << smallest << endl;
    //}

    //return 0;

    //question 4

    int arr[] = { 1, 3, 5, 7, 9 };  // Odd number of elements
    int size = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

    double median = findMedian(arr, size);
    cout << "The median is: " << median << endl;


}









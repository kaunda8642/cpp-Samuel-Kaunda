// SearchActivity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target)
            return i; // return index
    }
    return -1; // not found
}



int main()
{
    
}



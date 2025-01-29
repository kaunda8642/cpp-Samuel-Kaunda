// IfsandForInClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num;
    std::cout << "Please enter a number";
    std::cin >> num; 

    if (num % 5 == 0 && num % 3 == 0) {
        std::cout << "FizzBuzz";
    }
    else if (num % 5 == 0) {
        std::cout << "buzz";
    }
    else if (num % 3 == 0) {
        std::cout << "Fizz";
    }
    else {
        num; 
    }
    

    for (int i = 1; i < 101; i++) {
        std::cout << i; 
    }


    int sum = 0; 
    for (int i = 1; i < 101; i++) {
        sum = sum + i; 
    }
    std::cout << sum;

       
}



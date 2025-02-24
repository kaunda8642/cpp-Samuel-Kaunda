// PasswordValidator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The password must be at least 8 characters long. If not, the function should return the message: 
// “The password must be at least 8 characters”.
//The password must contain at least 2 numbers.If not, the function should return the message : 
// “The password must contain at least 2 numbers”.
//The password must contain at least one capital letter.If not, the function should return the message : 
// “The password must contain at least 1 capital letter”
T//he password must contain at least one special character.If not, the function should return the message : 
//“The password must contain at least 1 special character”.

#include <iostream>
#include <cassert>


using namespace std;

int numIntegers = 0;

bool valid_password(string password) {
    if (password.length() >= 8) {
        return true; 
    }
    else {
        cout << "Password must be 8 characters long";
    }

    if (isdigit(password.at(0) == true)){
        numIntegers++;

    } 
    if (isdigit(password.at(1) == true)) {
        numIntegers++;

    }
    if (isdigit(password.at(1) == true)) {
        numIntegers++;

    }
    if (isdigit(password.at(3) == true)) {
        numIntegers++;

    }
    if (isdigit(password.at(4) == true)) {
        numIntegers++;

    }
    if (isdigit(password.at(5) == true)) {
        numIntegers++;

    }
    if (isdigit(password.at(6) == true)) {
        numIntegers++;

    }
    if (isdigit(password.at(7) == true)) {
        numIntegers++;

    }

    if (numIntegers >= 2) {
        return true;
    }
    else {
        cout << "password must contain at least 2 numbers."; 
    }







}

int main(){
    assert(!valid_password("some invalid password"));
    assert(valid_password("some valid password"));
}


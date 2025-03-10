// studentClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Student  {
    int IDNum;
    string name; 
    string firstName;
    string lastName;
private:
    Student(int studentID) {
        studentID = IDNum;
    }
public: 

    void setFirstName(string firstName) {
        firstName = name; 
    }

    void setLastName(string lastName) {
        lastName = name; 
    }

    string getFirstName() {
        return firstName; 
    }

    string getLastName() {
        return lastName; 
    }
    Student(string firstName) {
        firstName = name; 
    }
    Student(string lastName) {
        lastName = name; 
    }
};

int main()
{
    std::cout << "Hello World!\n";
}



// StringArguementKnots.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Function to pass string by reference
void pass_by_reference(string& my_string) {
    // Print the argument to the console
    cout << "Original string (by reference): " << my_string << endl;

    // Append to the string
    my_string += " I'm a freshman at harper";

    // Print the modified string
    cout << "Modified string (by reference): " << my_string << endl;
}

// Function to pass string by value
void pass_by_value(string my_string) {
    // Print the argument to the console
    cout << "Original string (by value): " << my_string << endl;

    // Append to the string
    my_string += " I'm a freshman at harper";

    // Print the modified string
    cout << "Modified string (by value): " << my_string << endl;
}

int main() {
    // Initial string
    string my_string = "My name is Sam!";

    // Call the function that passes by reference
    pass_by_reference(my_string);

    // Print the string to show the effect of pass by reference
    cout << "String after pass_by_reference: " << my_string << endl;

    // Call the function that passes by value
    pass_by_value(my_string);

    // Print the string to show no effect after pass by value
    cout << "String after pass_by_value: " << my_string << endl;

    return 0;
}


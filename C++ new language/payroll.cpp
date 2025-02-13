// payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Employees participate in a group insurance program so that they can get good rates on health insurance. 
// The current package says that workers with three or more dependents must pay $35 per pay check whereas 
// other employees need to pay $15 per paycheck.

#include <iostream>

int main()
{
    int hoursWorked; 
    int numChildren;
    std::cout << "Welcome to the Payroll Program!\n\n";
    std::cout << "How many hours did you work this week?  ";
    std::cin >> hoursWorked;
    std::cout << "\nHow many children do you have?  ";
    std::cin >> numChildren;
    std::cout << "\n\nPayroll Stub: \n\n";
    std::cout << "     Hours: " << hoursWorked << "\n";
    std::cout << "     Rate: " << 16.78 << "$/hr\n";
    float gross = hoursWorked * 16.78;
    std::cout << "     Gross:  $" << gross << "\n\n"; 
    float socialTax = std::round((gross * .06) * 100) / 100;
    std::cout << "     Social Tax: $" << socialTax << "\n";
    float federalTax = std::round((gross * .14) * 100) / 100;
    std::cout << "     Federal Tax: $" << federalTax << "\n"; 
    float stateTax = gross * .05;
    std::cout << "     State Tax: $" << stateTax << "\n"; 
    float unionAmount = 10.00;
    float insuranceAmount;
    std::cout << "     Union: $" << unionAmount << "\n";
    if (numChildren >= 3) {
        insuranceAmount = 35.00;
        std::cout << "     Insurance: $" << insuranceAmount << "\n";
    }
    else {
        insuranceAmount = 15.00;
        std::cout << "     Insurance: $" << insuranceAmount << "\n";
    }
    float net = gross - (socialTax + federalTax + stateTax + unionAmount + insuranceAmount);
    std::cout << "     Net: $" << net << "\n\n";
    std::cout << "Thank you for using the Payroll Program!\n\n";





    return 0;

}



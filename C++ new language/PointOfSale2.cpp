// PointOfSale2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class PointOfSale {
private:
    string codes[6] = { "00295", "10342", "10557", "11221", "12151", "12157" };
    string items[6] = { "Cucumber", "Granny Smith Apple", "Banana", "Apricot", "Peach", "Celery" };
    int prices[6] = { 15, 50, 45, 90, 75, 80 };

    string enteredCodes[100];
    int numItems = 0;

public:
    void printMenu() {
        cout << "\nAvailable items:\n";
        for (int i = 0; i < 6; ++i) {
            cout << left << setw(22) << items[i] << " Code: " << codes[i] << "  Price: $" << prices[i] / 100 << ".";
            if (prices[i] % 100 < 10) cout << "0";
            cout << prices[i] % 100 << endl;
        }
    }

    void addCode(string code) {
        for (int i = 0; i < 6; i++) {
            if (code == codes[i]) {
                enteredCodes[numItems] = code;
                numItems++;
                cout << items[i] << " added to your list.\n";
                return;
            }
        }
        cout << " Invalid item code: " << code << endl;
    }

    void total() {
        int totalCents = 0;

        for (int i = 0; i < numItems; i++) {
            for (int j = 0; j < 6; j++) {
                if (enteredCodes[i] == codes[j]) {
                    totalCents += prices[j];
                }
            }
        }

        cout << " Total: $" << totalCents / 100 << ".";
        if (totalCents % 100 < 10) cout << "0";
        cout << totalCents % 100 << endl;
    }

    void clear() {
        numItems = 0;
        cout << " List cleared.\n";
    }
};

int main() {
    PointOfSale pos;
    string input;

    cout << " Welcome to the Point of Sale System!" << endl;
    pos.printMenu();

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1. Enter an item code\n";
        cout << "2. View total\n";
        cout << "3. Clear current list\n";
        cout << "4. Show menu\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> input;

        if (input == "1") {
            string code;
            cout << "Enter item code: ";
            cin >> code;
            pos.addCode(code);
        }
        else if (input == "2") {
            pos.total();
        }
        else if (input == "3") {
            pos.clear();
        }
        else if (input == "4") {
            pos.printMenu();
        }
        else if (input == "5") {
            cout << " Thank you! Goodbye!\n";
            break;
        }
        else {
            cout << " Invalid option. Please choose 1–5.\n";
        }
    }

    return 0;
}
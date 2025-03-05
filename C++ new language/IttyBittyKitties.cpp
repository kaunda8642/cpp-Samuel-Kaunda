// IttyBittyKitties.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void replaceWord(std::string& sentence, const std::string& oldWord, const std::string& newWord) {
    size_t pos = sentence.find(oldWord);

    // If the word is found, replace it with the new emoticon
    if (pos != std::string::npos) {
        sentence.replace(pos, oldWord.length(), newWord);
    }
}

int main()
{
    std::string catSentence; 
    std::cout << "Welcome to the Cat word Processor! Please enter a sentence:\n\n";
    std::getline(std::cin, catSentence);
    std::cout << "\n\nYour sentence is: \n\n" << catSentence;

    replaceWord(catSentence, "cat", "( =^-^= )");
    replaceWord(catSentence, "kitty", "( •.• )");
    replaceWord(catSentence, "kitten", "(•.•)");
    replaceWord(catSentence, "yarn", "o~");
    replaceWord(catSentence, "angry", "( >_< ) ");
    replaceWord(catSentence, "dance", "(~^.^~)");
    

    std::cout << "\n\nYour catified sentence is: \n\n";
    std::cout << catSentence;

    std::cout << "\n\nThank you for using the Cat word processor! Have a good day!";


    return 0; 
}



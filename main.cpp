#include <iostream>

using namespace std;

//Implement a program to draw a border of stars around a sting of text.

int main() {
    string userInput;

    cout << "Enter your text:";
    getline(cin, userInput);

    string border = string(userInput.length() + 4, '*');

    cout << border << endl;
    cout << "* " << userInput << " *" << endl;
    cout << border << endl;

    return 0;
}

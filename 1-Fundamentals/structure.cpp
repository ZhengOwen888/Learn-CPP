/******************************************************
    A program with some functions and comments
******************************************************/
#include <iostream>
using namespace std;

// Prototypes -> allows functions to be called that has yet to be defined
void line(), message();

int main() {
    cout << "Hello! The program starts in main()." << endl;
    line();
    message();
    line();
    cout << "At the end of main()." << endl;

    return 0;
}

// To draw a line
void line() {
    cout << "--------------------------------" << endl;
}

// To display a message
void message() {
    cout << "In function message()." << endl;
}
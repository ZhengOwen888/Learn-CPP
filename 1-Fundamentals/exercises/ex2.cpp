// Exercise 2
/*
    // Now you should not forget your glasses
    #include <stream>
    int main
    {
    cout << "If this text",
    cout >> " appears on your display, ";
    cout << " endl;"
    cout << 'you can pat yourself on '
        << " the back!"  << endl.
    return 0;
    )
    Resolve the errors and run the program to test your changes.
*/

// Corrected code
#include <iostream>
using namespace std;

int main () {
    cout << " If this text",
    cout << " appears on your display,";
    cout << endl;
    cout << " you can pat yourself on"
         << " the back!" << endl;

    return 0;
}


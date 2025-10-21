#include <iostream>

int main()
{
    /*
        Literals or Literal Constants are values that are fixed
        values that were inserted directly in the source code
    */
    std::cout << "Hello, World!"; // "Hello, World!" is a literal
    int x{5};                     // 5 is a literal

    /*
        - Literal values can not be change, hence are called constants
        - Variable values can be changed
        - Literal values can be acted upon immediatly but
        - variable values need to be first read after finding the memoery
            block of the variable that contain the value
    */

    std::cout << 5 << '\n'; // print value of a literal

    int y{10};
    std::cout << x << '\n'; // get value from variable then print value


    return 0;
}
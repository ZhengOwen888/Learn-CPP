#include <iostream>

int main()
{
  /*
    C++ reserve a set of keywords for its own use
    - Currently 92 for C++23
    - Ex: int, return, do, static
  */

  /*
    Identifiers
    - can not be a keyword
    - never start with a number and never use symbols except the underscore
  */

  int value;  // conventional
  int Value;  // unconventional (start with a lowercase)
  int VALUE;  // unconventional (use all lowercase)
  int VaLuE;  // unconventional (are you ok)
  int _value; // unconventional

  int my_variable_name; // conventional (snake case)
  int myVariableName;   // conventional (camel case)

  return 0;
}

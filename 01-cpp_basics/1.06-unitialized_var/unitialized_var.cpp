#include <iostream>

int main()
{
  /*
    Initialized - The object is given a known value at point of definition
    Assignment  - The object is given a known value beyond the point of definition
    Uninitialized - The object has not been given a known value yet
  */
  int x;

  // unexpected/undefined behavior behavior
  std::cout << x << '\n';

  /*
    Implementation - specific compiler + the associated statndard library it comes with
    Implementation defined behavior - behavior defined by implementation and documented
    Unspecified behavior - almost the same as implementation defined behavior but is not required to be documented

    !!!AVOID Implementation defined behavior and Unspecified behavior
  */

  /*
    Undefined behavior is when you can not guarantee how a program would behave
  */

  return 0;
}
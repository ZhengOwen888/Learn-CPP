#include <iostream>

int main()
{
  // defining a varible x
  int x;

  // assign value 10 to variable x
  x = 10;

  // variable assignment takes two steps
  // 1. define the variable
  // 2. assign the variable
  // This can be reduce to one step using initialization with Initializers

  int a; // default-initialization (no initializer)

  // Traditional initialization
  int b = 5;  // copy-initialization (initial value after equals sign)
  int c(6);   // direct-initialization (initial value in parenthesis)

  // Modern initialization forms (preferred):
  // Avoids "Most Vexing Parse" and "narrowing conversions"
  int d{7}; // direct-list-initialization (initial value with braces)
  int e{}; // value-initialization (empty braces)

  // You can choose either but be consistent

  // Initializing multiple variables
  int i, j = 5; // i is not initialized to 5

  // Instead
  int u = 5, v = 5; // now both variable stores 5

  // Somtimes we have unused variables we want neither remove or randomly use
  // [[maybe_unused]] attribute C++17 - won't complain if variable is unused
  [[maybe_unused]] double pi{1.14159};
  [[maybe_unused]] double gravity{9.81};
  [[maybe_unused]] double phi{1.61803};

  return 0;
}
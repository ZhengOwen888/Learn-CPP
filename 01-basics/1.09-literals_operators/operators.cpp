#include <iostream>

int main()
{

    /*
        Operation is the process of having zero or more input values
        called Operands that produce new values. The operation to be
        performed by a symbol is called an operator:

        1. +
        2. -
        3. *
        4. /
        5. %
        6. =
        7. ==
        8. <<
        9. >>

        There are also other operators that are keywords
    */

    std::cout << 1 - 2 << '\n';
    std::cout << 1 + 2 << '\n';
    std::cout << 1 * 2 << '\n';
    std::cout << 1 / 2 << '\n';
    std::cout << 1 % 2 << '\n';
    std::cout << (1 == 2) << '\n';

    /*
        Unary - operators that act on one operand

        Binary - operators that act on two operands

        Ternary - operators that act on three operands

        Nullary - operators that act on zero operand
    */

    // chaining operators is possible too
    int x;
    int y;
    // assign 10 to y which returns y, which then assign that to x
    x = (y = 10);

    /*
        side effects - refers to any observable change in the state
        of the program or its environment that resulted from evaluating
        an expression.
    */

    return 0;
}
#include <iostream>

int main()
{
    /*
        - Expresssions are non empty sequence of literals, variables, and
        and function calls that calculates a value.
        - Evaluation is the act of calculating that value
        - The result is reffered to return value
    */

    int x{};
    x = 5;     // x = 5 has side effect of assigning 5 to x, evaluates to x
    x = x + 1; // has side effect of assigning x + 1 to x, evaluates to x

    std::cout << x << '\n';

    // expression does not end with a semicolon but rather the statement
    int z{1 + 2}; // type identifier { expression };

    /*
        Expression Statement - statement that consist of an expression followed
        by a semicolon
    */

    // Useless expression statement - return value dicarded after evaluation
    2 + 3;

    // Subexpressions - expression used as an operand
    // x and 4 + 5 are sub expressions
    x = 4 + 5;

    // Full expressions - the entire expression
    // x = 4 + 5 is a full expression
    x = 4 + 5;

    // Compound expressions - contain more than one use of operators
    // x + 4 + 5 is a compound expression because it use more than one operator
    x = 4 + 5;

    // An expression can be multiple types, so beware

    return 0;
}
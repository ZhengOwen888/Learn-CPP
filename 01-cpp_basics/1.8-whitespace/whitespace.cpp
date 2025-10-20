#include <iostream>

int main()
{
    // use as many white space as allowed to make code as clear as possible
    std::cout << "roses are red\n";
    std::cout << "violets are blue\n";
    std::cout << "sugar is sweet\n";
    std::cout << "and so are you\n";

    // effective use of white space
    int cost          = 57;
    int pricePerItem  = 24;
    int value         = 5;
    int numberOfItems = 17;

    /*
        seperate long expressions into separate lines
        with the operators starting the next line
    */
    std::cout << 3 + 4
        + 5 + 6
        * 7 * 8;

    // This is easier to read

    // cout lives in the iostream library
    std::cout << "Hello world\n";

    // these comments are easier to read
    std::cout << "It is very nice to meet you\n";

    // when seperated by whitespace
    std::cout << "Yeah!\n";
}
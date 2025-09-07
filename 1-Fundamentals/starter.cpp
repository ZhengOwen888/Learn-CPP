// This is a single line comment
/* This is a
multi-line comment */


/*
    Preprocessors
    #include -> copy the contents of another fiile into your code
    #define -> define macros (text replacements)
    #ifdef / #ifndef / #endif -> conditional compilation
*/
/*
    iostream -> comprises conventions for input and output streams,
    stream means that the information involved will be treated as a
    flow a data.
*/
#include <iostream>
/*
    Built-in functions, classes, and objects, like cout, cin, cerr are
    grouped inside a container called standard namespace -> std
    Normally you write:
        std::cout << "Enjoy yourself with C++!" << std::endl;
    If you add:
        using namespace std;
    Then you can instead write:
        cout << "Enjoy yourself with C++!" << endl;
*/
using namespace std;

int main() {
    /*
        cout -> output stream object which represents the standard output
        <<   -> insertion operator that takes the data on the right-hand
                side and inserts it into the stream on the left-hand side.
        endl -> adds a new line to the output stream, and flush everything
                out and forces everything to be printed immediately
    */
    cout << "Enjoy yourself with C++!" << endl; // endl adds a newline
    return 0;
}

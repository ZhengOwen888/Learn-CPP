// input/output library
#include <iostream>

int main()
{
  // (<<) insert and (>>) extract, are operators for input/output streams,
  // the direction it points to shows where the data will be inserted or extracted to

  // (std::cout) - standard:: character output
  // (std::endl) - standard:: end line
  std::cout << "Hello" << ", World!" << std::endl;

  /*
    std::cout is buffered, data is stored and later flushed to the destination
    opposite is unbuffered ouput immediately send output to destination
  */

  // std::end vs \n
  /*
    std::end - adds a new line then flushes the buffer which is slow
    \n - only add a new line
  */
  std::cout << "To be or not to Be\n"
            << "That is the question\n";


  // (std::cin) - standard::character input
  std::cout << "Enter a number: ";
  int x{}; // value initialization
  std::cin >> x; // get number from keyboard and store in variable x
  std::cout << "You entered: " << x << '\n';

  /*
    std::cin is buffered
    data is entered and stored in a buffer along with the \n from the enter key

    the << starts extracting when user hits the enter key "\n"
    multiple inputs are separated by spaces

    How extraction works
    1. if std::cin is not in a good state due to prior extractions it will abort
    2. Leading white space are discarded
    3. (>>) will wait for more data if buffer is empty
    4. (>>) extracts as many valid characters as possible before
        it reaches a newline character or an invalid character
  */

  return 0;
}

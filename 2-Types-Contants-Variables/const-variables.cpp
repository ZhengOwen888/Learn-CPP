// Circumference and area of a circle
#include <iostream>
using namespace std;

/*
    const - read only object, can not be modified at a later
    stage and must be initialized during its definition
*/
const double pi = 3.141593; // Constant global variable

int main() {

    double area, circumference, radius; // Local variables

    cout << "Enter the radius of the circle: ";
    cin >> radius; // take user input

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "\n To Evaluate a Circle\n" << endl;
    cout << "Radius:       " << radius        << endl
         << "Cicumference: " << circumference << endl
         << "Area:         " << area          << endl;

    return 0;
}
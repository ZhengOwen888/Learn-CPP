#include <iostream>
#include <limits>
#include <locale>
using namespace std;

/*
    Fundamental Types

    Boolean values -> bool
    Characters     -> char, wchar_t, char16_t, char32_t
    Integers       -> short, int, long, long long
    Floating-point -> float, double, long double
*/

int main() {
    // Set up new locale
    // Set global locale to system default (UTF-8 usually)
    locale::global(locale(""));

    // Tell wcout to use that locale
    wcout.imbue(locale());

    // --------------------------------------- //
    //                  Boolean                //
    // --------------------------------------- //
    // bool - 1 byte - represents 1:true or 0:false
    bool isTrue = true || false;         // true
    cout << isTrue << endl;              // prints 1
    cout << boolalpha << isTrue << endl; // prints "true", because we used a stream manipulator boolalpha

    // ------------------------------------------ //
    //                 Characters                 //
    // ------------------------------------------ //
    // char - 1 byte - represents a single character
    char letter = 'A';
    char digit = '1';
    char newline = '\n';
    cout << letter << endl;      // A
    cout << (int)letter << endl; // 65 (ASCII value of 'A')

    // wchar_t - wide character type(2 or 4 bytes), used for larger character sets
    wchar_t w = L'嗨';  // 'L' prefix makes it wide
    wcout << w << endl; // prints 嗨

    // char16_t -> same as wchar_t but always only 2 bytes, usually used as a storage
    char16_t w16 = u'あ';

    // char32_t -> same as wchar_t but always only 4 bytes, usually used as a storage
    char32_t w32 = U'水';

    // ------------------------------------------ //
    //                  Integers                  //
    // ------------------------------------------ //
    // numeric_limits comes from c++ standard library <limits>, part of std namespace
    // short - 2 bytes
    short short_max = numeric_limits<short>::max(); //  2^15 - 1
    short short_min = numeric_limits<short>::min(); // -2^15
    unsigned short unsigned_short_max = numeric_limits<unsigned short>:: max(); // 2^16 - 1

    // int - 4 bytes
    int int_max = numeric_limits<int>::max(); //  2^31 - 1
    int int_min = numeric_limits<int>::min(); // -2^31
    unsigned int unsigned_int_max = numeric_limits<unsigned int>::max(); // 2^32 - 1

    // long - 8 bytes on Linux/macOS, 4 bytes on Windows
    long long_max = numeric_limits<long>::max(); // 2^63 - 1
    long long_min = numeric_limits<long>::min(); // 2^63
    unsigned long usigned_long_max = numeric_limits<unsigned long>::max(); // 2^64 - 1

    // long long - 8 bytes gauranteed
    long long long_long_max = numeric_limits<long long>::max(); // 2^63 - 1
    long long long_long_min = numeric_limits<long long>::min(); // 2^63
    unsigned long long unsigned_long_long_max = numeric_limits<unsigned long long>::max(); // 2^64 - 1

    // ------------------------------------------ //
    //               Floating Point               //
    // ------------------------------------------ //
    // float - 4 bytes - 1 bit sign - 8 bit exponenet - 23 bit fraction/mantisa
    float float_max = numeric_limits<float>::max();    // 3.40282e+38
    float float_min = numeric_limits<float>::lowest(); // -3.40282e+38

    // double - 8 bytes - 1 bit sign - 11 bit exponent - 52 bit fraction/mantisa
    double double_max = numeric_limits<double>::max();    // 1.79769e+308
    double double_min = numeric_limits<double>::lowest(); // -1.79769e+308

    // long double - 16 bytes - 1 bit sign - 15 bit exponent - 112 bit fraction/mantisa
    long double long_double_max = numeric_limits<long double>::max();    // 1.18973e+4932
    long double long_double_min = numeric_limits<long double>::lowest(); // -1.18973e+4932

    return 0;
}
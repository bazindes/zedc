/*
    typecast.cpp
    Created by: baz
    Date: 2019-03-26 02:14
*/

#include <iostream>

int main() {
    using namespace std;
    int auks, bats, coots;

    // the following statement adds the vals as doulble
    // then converts the result to int
    auks = 19.99 + 11.99;

    // these statements add vals as int
    bats = (int) 19.99 + (int) 11.99; // old C syntax
    coots = int (19.99) + int (11.99); // new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;

    return 0;
}
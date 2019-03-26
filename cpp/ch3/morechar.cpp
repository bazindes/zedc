/*
    morechar.cpp
    Created by: baz
    Date: 2019-03-26 01:54
*/


#include <iostream>

/*
    ASCII:
    'A' = 65
    'a' = 97
    '5' = 53
    '' = 32
    '!' = 33
*/

int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch ++;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');

    cout << endl << "Done!" << endl;

    bool start = -100; // true
    bool stop = 0; // false
    const int Months = 12;

    return 0;
}
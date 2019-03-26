/*
    hexoct.cpp
    Created by: baz
    Date: 2019-03-26 01:44
*/

#include <iostream>

/*
1st=1~9, base 10
1st=0 & 2nd=1~7, base 8
0x 0X, base 16
*/

int main() {
    using namespace std;
    int chest = 42; // decimal integer literal
    int waist = 0x42; // hexadecimal integer literal
    int inseam = 042; // octal integer literal

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    return 0;
}
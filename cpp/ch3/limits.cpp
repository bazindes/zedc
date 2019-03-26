/*
    limits.cpp
    Created by: baz
    Date: 2019-03-26 01:28
*/

#include <climits>
#include <iostream>

int main() {
  using namespace std;
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  // sizeof
  cout << "int is " << sizeof(int) << " bytes." << endl;
  cout << "short is " << sizeof n_short << " bytes." << endl;
  cout << "long is " << sizeof n_long << " bytes." << endl;
  cout << "long long is " << sizeof n_llong << " bytes." << endl;
  cout << endl;

  cout << "Maximum values: " << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl;
  cout << "long long: " << n_llong << endl;

  cout << "Minimum int value: " << INT_MIN << endl;
  cout << "Bits per byte = " << CHAR_BIT << endl;

  // c++ 98
  int hamburgers = {24};
  // c++ 11
  int emus{7};
  int rheas = {12};
  int rocs = {};
  int psychics{};

  return 0;
}
/*
  inline.cpp
  Created by: baz
  Date: 2019-03-29 15:34
*/

#include <iostream>

inline double square_(double x) { return x * x; }

int main() {
  using namespace std;
  double a, b;
  double c = 13.0;

  a = square_(5.0);
  b = square_(4.5 + 7.5);

  cout << "a = " << a << " , b = " << b << "\n";
  cout << "c = " << c;
  cout << ", c squared = " << square_(c++) << "\n";
  cout << "Now c = " << c << "\n";

  return 0;
}
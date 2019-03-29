/*
  cubes.cpp
  Created by: baz
  Date: 2019-03-29 16:19
*/

#include <iostream>
double cube(double a);
double refcube(double &a);

int main() {
  using namespace std;
  double x = 3.0;

  cout << cube(x);
  cout << " = cube of " << x << endl;
  cout << refcube(x);
  cout << " = cube of " << x << endl;
  return 0;
}
// a survives inside cube with value of x,
// change a doesn't affact x
double cube(double a) {
  a *= a*a;
  return a;
}

// reference is the value x itself,
// change a ref means change x itself
double refcube(double &a) {
  a *= a * a;
  return a;
}
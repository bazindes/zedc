/*
  choices.cpp
  Created by: baz
  Date: 2019-04-02 23:44
*/

#include <iostream>

template <class T> T lesser(T a, T b) { return a < b ? a : b; }

int lesser(int a, int b) {
  a = a < 0 ? -a : a;
  b = b < 0 ? -b : b;
  return a < b ? a : b;
}

int main() {
  using namespace std;
  int m = 20;
  int n = -30;
  double x = 15.5;
  double y = 25.9;

  cout << lesser(m, n) << endl;
  cout << lesser(x, y) << endl;
  cout << lesser<>(m, n) << endl;
  cout << lesser<int>(x, y) << endl;

  /**
   * decltype
   */

  int i;
  decltype(i) j;               // make y the same type as x
  decltype(i + j) ipj = i + j; // make xpy the same type as x+y
  cout << "j is " << typeid(j).name() << endl;
  cout << "ipj is " << typeid(ipj).name() << endl;

  double a1 = 5.5;
  double a2 = 7.9;
  double &a3 = a1;
  const double *pd;
  decltype(a1) w;      // type double
  decltype(a3) u = a2; // type double &
  decltype(pd) v;      // type const double *
  cout << "w is " << typeid(w).name() << endl;
  cout << "u is " << typeid(u).name() << endl;
  cout << "v is " << typeid(v).name() << endl;

  long indeed(int);
  decltype(indeed(3)) p; // m is type long
  cout << "p is " << typeid(p).name() << endl;

  double xx = 4.4;
  decltype((xx)) r2 = xx; // r2 is double &
  decltype(xx) r3 = xx;   // r3 is double
  cout << "r2 is " << typeid(r2).name() << endl;
  cout << "r3 is " << typeid(r3).name() << endl;

  return 0;
}

double h(int x, float y);
auto h(int x, float y) -> double; // c++11
template <class T1, class T2> auto h(T1 x, T2 y) -> decltype(x + y) {
  return x + y;
}
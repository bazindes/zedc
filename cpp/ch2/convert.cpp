/*
    convert.cpp
    Created by: baz
    Date: 2019-03-26 01:09
*/

#include <iostream>

int stonetolb(int);

int main() {
  using namespace std;
  int stone;
  cout << "Enter the weight in stone: ";
  cin >> stone;
  int pounds = stonetolb(stone);
  cout << stone << " stone = ";
  cout << pounds << " pounds." << endl;

  return 0;
}

int stonetolb(int n) { return 14 * n; }
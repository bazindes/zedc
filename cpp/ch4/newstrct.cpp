/*
  newstrct.cpp
  Created by: baz
  Date: 2019-03-27 00:55
*/

#include <iostream>

struct inflatable {
  char name[20];
  float vol;
  double price;
};

int main() {
  using namespace std;
  inflatable *ps = new inflatable;
  cout << "Enter name of inflatable item: ";
  cin.get(ps->name, 20);
  cout << "Enter vol in cubic feet: ";
  cin >> (*ps).vol;
  cout << "Enter price: $";
  cin >> ps->price;
  cout << "Name: " << (*ps).name << endl;
  cout << "Vol: " << ps->vol << " cubic feet" << endl;
  cout << "Price: $" << ps->price <<endl;

  delete ps;
  return 0;
}
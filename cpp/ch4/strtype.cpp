/*
  strtype.cpp
  Created by: baz
  Date: 2019-03-26 23:07
*/

#include <iostream>
#include <string>

int main() {
  using namespace std;
  string str1;
  string str2;
  char first_date[] = {"Le Chapon Dodu"};
  char seconde_date[] {"The Elegant Plate"};
  string third_date = {"The Bread Bowl"};
  string fourth_date {"Hank's Fine Eats"};

  third_date += fourth_date;
  cout << third_date;
}
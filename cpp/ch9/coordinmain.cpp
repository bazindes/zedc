/*
  file1.cpp
  Created by: baz
  Date: 2019-04-03 00:39
*/
#include <iostream>
#include "coordin.h"

using namespace std;

int main() {
  rect rplace;
  polar pplace;

  cout << "Enter the x and y values: ";
  while(cin >> rplace.x >> rplace.y){
    pplace = rect_to_polar(rplace);
    show_polar(pplace);
    cout << "Next two numbers (q to quit): ";
  }
  cout << "Bye!\n";
  return 0;
}

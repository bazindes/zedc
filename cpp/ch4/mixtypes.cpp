/*
  mixtypes.cpp
  Created by: baz
  Date: 2019-03-27 01:33
*/

#include <iostream>

using namespace std;

struct antarctica_years_end {
  int year;
};

int main() {
  antarctica_years_end a01, a02, a03;
  a01.year = 1998;
  antarctica_years_end *pa = &a02;
  pa->year = 1999;
  antarctica_years_end trio[3];
  trio[0].year = 2003;

  cout << trio->year << endl;

  const antarctica_years_end *arp[3] = {&a01, &a02, &a03};
  cout << arp[1]->year << endl;
  const antarctica_years_end **ppa = arp;
  auto ppb = arp;
  cout << (*ppa)->year << endl;
  cout << (*(ppb + 1))->year << endl;

  return 0;
}
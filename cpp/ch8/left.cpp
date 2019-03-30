/*
  left.cpp
  Created by: baz
  Date: 2019-03-29 20:50
*/
#include <iostream>

const int ArSize = 80;
char *left(const char *str, int n = 1);
int harpo(int n, int m=4, int j = 5);

int main() {
  using namespace std;
  char sample[ArSize];
  cout << "Enter a string:\n";
  cin.get(sample, ArSize);
  char *ps = left(sample, 4);
  cout << ps << endl;
  delete[] ps;

  harpo(1);
  harpo(1, 2);
  harpo(1,2,3);
  return 0;
}

char *left(const char *str, int n) {
  if (n < 0)
    n = 0;
  char *p = new char[n + 1];
  int i;
  for (i = 0; i < n && str[i]; i++)
    p[i] = str[i];
  while (i <= n)
    p[i++] = '\n';
  return p;
}

int harpo(int n, int m, int j){
  return n + m + j;
}
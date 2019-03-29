/*
  arrfun4.cpp
  Created by: baz
  Date: 2019-03-29 00:50
*/

#include <iostream>

const int ArSize = 8;

int sum_arr(const int *begin, const int *end);
int sum2(int ar[][4], int size);

int main() {
  using namespace std;

  int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
  int sum = sum_arr(cookies, cookies + ArSize);
  cout << "Total cookies eaten: " << sum << endl;
  sum = sum_arr(cookies, cookies + 3);
  cout << "First three eaters ate: " << sum << " cookies.\n";
  sum = sum_arr(cookies + 4, cookies + 8);
  cout << "Last four eaters ate " << sum << " cookies.\n";

  // two dimensional array
  int data[3][4] = {{1, 2, 3, 4}, {9, 8, 7, 6}, {2, 4, 6, 8}};
  int total = sum2(data, 3);
  cout << total << endl;

  return 0;
}

int sum_arr(const int *begin, const int *end) {
  const int *pt;
  int total = 0;

  for (pt = begin; pt != end; pt++)
    total = total + *pt;

  return total;
}

void tryConst() {
  // first class const can't be used to change the object pointed at
  // but can point to another object
  int age;
  const int *pt = &age;
  int sage = 80;
  pt = &sage;

  // second class const can be used to modify the object pointed at
  // but can't point to another object
  int sloth = 3;
  int *const finger = &sloth;
  *finger = 5;
  // finger = &sage; wrong
}

int sum2(int ar[][4], int size) {
  int total = 0;
  for (int r = 0; r < size; r++)
    for (int c = 0; c < 4; c++)
      total += ar[r][c];
  /*

  ar             : pointer to first row of an array of 4 int
  ar + r         : pointer to row r (an array of 4 int)
  *(ar + r)      : row r (an array of 4 int, hence the name of an array, thus a
                   pointer to the first int in the row, i.e., ar[r])
  *(ar + r) + c  : pointer int number c in row r, i.e., ar[r] + c
  *(*(ar + r) c) : value of int number c in row r, i.e., ar[r][c]

   */
  return total;
}
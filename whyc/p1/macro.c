/*
  macro.c
  Created by: baz
  Date: 2019-03-27 17:19
*/

#include <stdio.h>

#define MAR_VA 100;
const int Con_va =
    100; // different with macro: this one can't be used in initialize array

#define SWAP1(a, b) (a += b, b = a - b, a -= b)
#define SWAP2(x, y)                                                            \
  {                                                                            \
    x ^= y;                                                                    \
    y ^= x;                                                                    \
    x ^= y;                                                                    \
  }

int main() {
  printf("__LINE__ is current line number: %d\n", __LINE__);
  printf("__FILE__ is current filename: %d\n", __FILE__);
  printf("__DATE__ is current date: %d\n", __DATE__);
  printf("__TIME__ is current time: %d\n", __TIME__);
  printf("__func__ is current outer func name: %d\n", __func__);
  printf("__STDC__ is current Standard of C: %d\n", __STDC__);
  printf("__STDC_VERSION__ is current Standard of C: %d\n", __STDC_VERSION__);

  int v1 = 10;
  int v2 = 20;
  SWAP1(v1, v2);
  SWAP2(v1, v2);

  return 0;
}
// Program 9.1 Pointing to functions
#include <stdio.h>

// Function prototypes
int sum(int, int);
int product(int, int);
int diff(int, int);
int any_func(int (*pfunc)(int, int), int x, int y);

int main(void) {
  int a = 10;
  int b = 5;
  int result = 0;
  int (*pfun)(int, int);

  pfun = sum;
  result = pfun(a, b);
  printf("pfun = sum, result = %2d\n", result);

  pfun = product;
  result = any_func(pfun, a, b);
  printf("pfun = product, result = %2d\n", result);

  pfun = diff;
  result = pfun(a, b);
  printf("pfun = diff, result = %2d\n", result);

  return 0;
}

int sum(int x, int y) { return x + y; }

int product(int x, int y) { return x * y; }

int diff(int x, int y) { return x - y; }

int any_func(int (*fun)(int, int), int x, int y) { return fun(x, y); }

/*
  test.c
  Created by: baz
  Date: 2019-03-26 16:53
*/
#include <stdio.h>
#define SIZES 5

int main(void) {
  int *cp = malloc(SIZES * sizeof(int));
  // do something
  free(cp);
  return 0;
}

struct inetaddr_4{
  int port;
  char *name;
};

struct inetaddr_4 *addr_info;

typedef struct _addr{
  int port;
  char *name;
} inetaddr_4;

inetaddr_4 *addr_info_2;

// finincial account availability
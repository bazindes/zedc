// Program 9.4 Static versus automatic variables
#include <stdio.h>

int count = 0;

// Function prototypes
void test1(void);
void test2(void);
void test3(void);

int main(void) {
  for(int i =0; i < 5; i++){
    test1();
    test2();
    test3();
  }
  return 0;
}

// Function test1 with an automatic variable
void test1(void){
  int count = 0 ;
  printf("test1 count = %d\n", ++count);
}

void test2(void){
  static int count = 0;
  printf("test2 count = %d\n", ++count);
}

void test3(void){
  printf("test3 count = %d\n", ++count);
}

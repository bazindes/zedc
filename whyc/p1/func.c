/*
  func.c
  Created by: baz
  Date: 2019-03-26 16:43
*/

int func(int arg_1, float arg_2);
int func1();
int func2(void);
int func3(int arg_n);
int func4(int arg_n, ...);

int main(int argc, char *argv[]) {
  int output = func(11, 22.0);
  printf("%d\n", output);
  return 0;
}

int func(int arg_1, float arg_2) {
  int return_val = arg_1;
  float temp_f = arg_2;
  return return_val;
}
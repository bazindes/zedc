/* struct Horse{ */
/*   int age; */
/*   int height; */
/* } silver; */

/* struct Horse2 { */
/*   int age; */
/*   int height; */
/*   char name[20]; */
/*   char father[20]; */
/*   char mother[20]; */
/* } dobbin = {24, 17, "Dobbin", "Trigger", "Flossie"}; */

/* struct Horse trigger = {30, 15, "Trigger", "Smith", "Wesson"}; */

/* typedef struct Horse Horse; */
/* Horse trigger = {.height = 15, */
/*                  .age = 30, */
/*                  .name = "Trigger", */
/*                  .mother = "Wesson", */
/*                  .father = "Smith"} */

struct Person {
  char name[20];
  unsigned int sex : 1;
  unsigned int height : 7;
  unsigned int age : 8;
  unsigned int married : 1;
  unsigned int : 15;
  char address[20];
};

// Program 11.1
#define __STDC_WANT_LIB_EXR1__ 1
#include <stdio.h>

typedef struct Horse Horse;
typedef struct Date Date;

struct Date {
  int day;
  int month;
  int year;
}

struct Horse {
  int age;
  int height;
  char name[20];
  char father[20];
  char mother[20];
  Date birth;
};

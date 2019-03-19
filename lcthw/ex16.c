#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
  char * name;
  int age;
  int wei;
  int hei;
};

struct Person * person_create(char * name, int age, int wei, int hei){
  struct Person * p = malloc(sizeof(struct Person));
  assert(p != NULL);

  p -> name = strdup(name);
  p -> age = age;
  p -> wei = wei;
  p -> hei = hei;

  return p;
}

void person_destroy(struct Person * p){
  assert(p != NULL);
  free(p -> name);
  free(p);

}

void person_print(struct Person * p){
  // assert(p != NULL);

  printf("Name: %s\n" , p -> name);
  printf("\tage: %d\n" , p -> age);
 printf("\tweight: %d\n" , p -> wei);
  printf("\theight: %d\n" , p -> hei);

}

int main(int argc, char *argv[])
{
    // make two people structures
    struct Person *joe = person_create(
            "Joe Alex", 32, 64, 140);

    struct Person *frank = person_create(
            "Frank Blank", 20, 72, 180);

    // print them out and where they are in memory
    printf("Joe is at memory location %p:\n", joe);
    person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    person_print(frank);

    // make everyone age 20 years and print them again
    joe->age += 20;
    joe->hei -= 2;
    joe->wei += 40;
    person_print(joe);

    frank->age += 20;
    frank->wei += 20;
    person_print(frank);

    // destroy them both so we clean up
    person_destroy(joe);
    person_destroy(frank);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "object.h"
#include <assert.h>

void object_destroy(void *self) {
  Object *obj = self;
  if(obj){
    if(obj -> description)
      free(obj -> description);
    free(obj);
  }
}

void object_describe(void *self) {
  Object *obj = self;
  printf("%s.\n" , obj -> description);
}

int object_init(void *self) {
  // do nothing really;
  return 1;
}

void *object_move(void *self, Direction direction) {
  printf("You can't go that direction. \n");
  return NULL;
}

int object_attack(void *self, int damage) {
  printf("You can't attack that.\n");
  return 0;
}

void *object_new(size_t size, Object proto, char *description) {
  // setup the default functions in case they aren't set
  if(!proto.init) proto.init = object_init;
  if(!proto.describe) proto.describe = object_describe;
  if(!proto.destroy) proto.destroy = object_destroy;
  if(!proto.attack) proto.attack = object_attack;
  if(!proto.move) proto.move = object_move;

  // this seems weird, but we can make a struct of one size,
  // then point a different pointer at it to "cast" it
  Object *el = calloc(1, size);
  *el = proto;

  // copy the description over
  el -> description = strdup(description);

  // initialize it with whatever init we were given
  if(!el -> init(el)) {
    // looks like it didn't initialize properly
    el -> destroy(el);
    return NULL;
  }else {
    // all done, we make an object of any type
    return el;
  }

 }

/*
    ex19.h
    Created by: baz
    Date: 2019-03-09 16:43
*/
#ifndef _ex19_h
#define _ex19_h

#include "object.h"

struct Monster {
    Object proto;
    int hit_points;
};

typedef struct Monster Monster;

int monster_attack(void *self, int damage);
int monster_init(void *self);

struct Room {
    Object proto;

    Monster *bad_guy;

    struct Room *north;
    struct Room *south;
    struct Room *east;
    struct Room *west;
};

typedef struct Room Room;

void *room_move(void *self, Direction direction);
int room_attack(void *self, int damage);
int room_init(void *self);


struct Map {
    Object proto;
    Room *start;
    Room *location;
};

typedef struct Map Map;

void *map_move(void *self, Direction direction);
int map_attack(void *self, int damage);
int map_init(void *self);

#endif
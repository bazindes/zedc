/*
  coordin.h
  Created by: baz
  Date: 2019-04-03 00:32
*/

/**
 * 1. function prototype
 * 2. #define / const variables
 * 3. struct declarations
 * 4. class declarations
 * 5. template declarations
 * 6. inline function
 * 
*/
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar{
  double distance; 
  double angle;
};

struct rect{
  double x;
  double y;
};

// prototype
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif

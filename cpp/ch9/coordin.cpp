/*
  file2.cpp
  Created by: baz
  Date: 2019-04-03 00:42
*/
#include "coordin.h"
#include <cmath>
#include <iostream>

// convert rectangualr to polar coordinates
polar rect_to_polar(rect xypos) {
  using namespace std;
  polar ans;

  ans.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
  ans.angle = atan2(xypos.y, xypos.x);

  return ans;
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos) {
  using namespace std;
  const double Rad_to_deg = 57.29577951;

  cout << "distance = " << dapos.distance;
  cout << ", angle = " << dapos.angle * Rad_to_deg;
  cout << " degrees\n";
}
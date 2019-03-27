/*
  structur.cpp
  Created by: baz
  Date: 2019-03-26 23:31
*/
#include <iostream>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main() {
  using namespace std;
  // c style
  struct inflatable guest = {"Glorious Gloria", 1.88, 29.99};
  // c++ style
  inflatable pal = {"Audacious Arthur", 3.12, 32.99};

  cout << "Expand your guest list with " << guest.name;
  cout << " and " << pal.name << " !\n";
  cout << "You can have both for $";
  cout << guest.price + pal.price << " !\n";

  inflatable guests[2] = {{"Bambi", 0.5, 21.99}, {"Godzilla", 2000, 545.99}};

  cout << "The guests " << guests[0].name << " and " << guests[1].name
       << "\nhave a combined volume of " << guests[0].volume + guests[1].volume
       << " cubic feet.\n";

  struct widget {
    char brand[20];
    int type;
    union id{
      long id_num;
      char id_char[20];
    };
  };

  enum spectrum {red, orange, yellow=100, green, blue, violet, indigo, ultraviolet};

  return 0;
}
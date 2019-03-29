/*
  strtref.cpp
  Created by: baz
  Date: 2019-03-29 16:29
*/

#include <iostream>
#include <string>

struct free_throws {
  std::string name;
  int made;
  int attampts;
  float percent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);

int main() {
  // partial initialization - remaining members set to 0
  free_throws one = {"Ifelsa Branch", 13, 14};
  free_throws two = {"Kobe Bryant", 10, 16};
  free_throws three = {"Karl Malone", 7, 9};
  free_throws four = {"Shaq Oneal", 5, 9};
  free_throws five = {"Long Long", 6, 14};
  free_throws team = {"Throwgoods", 0, 0};

  free_throws dup;
  set_pc(one);
  display(one);
  accumulate(team, one);
  display(team);

  display(accumulate(team, two));
  accumulate(accumulate(team, three), four);
  display(team);

  dup = accumulate(team, five);
  std::cout << "Displaying team:\n";
  display(team);
  std::cout << "Displaying dup after assignment:\n";
  display(dup);
  set_pc(dup);

  accumulate(dup, five) = four;
  std::cout << "Displaying dup after ill-advised assignment:\n";
  display(dup);
  return 0;
}

void display(const free_throws &ft) {
  using std::cout;
  cout << "Name: " << ft.name << '\n';
  cout << " Made: " << ft.made << '\t';
  cout << "Attempts: " << ft.attampts << '\t';
  cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws &ft) {
  if (ft.attampts != 0)
    ft.percent = 100.0f * float(ft.made) / float(ft.attampts);
  else
    ft.percent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source) {
  target.attampts += source.attampts;
  target.made += source.made;
  set_pc(target);
  return target;
}
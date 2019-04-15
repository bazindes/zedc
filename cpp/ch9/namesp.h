/*
  namesp.h
  Created by: baz
  Date: 2019-04-15 00:45
*/

#include <string>

namespace pers {
struct Person {
  std::string fname;
  std::string lname;
};
void getPerson(Person &);
void showPerson(const Person &);
} // namespace pers

namespace debts {
using namespace pers;
struct Debt {
  Person name;
  double amount;
};
void getDebt(Debt &);
void showDebt(const Debt &);
double sumDebts(const Debt ar[], int n);
} // namespace debts
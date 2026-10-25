//5. Write a program that reads in a year then prints out only one of the following:
//Divisible by 100 – new century.
//Divisible by 10 – new decade.
//Ordinary year.

#include <iostream>
using namespace std;

int year;

int main () {
  cin >> year;
  if (year >= 0) {
    if (year % 100 == 0) {
    cout << "New Century\n";
  } else if (year % 10 == 0) {
      cout << "New Decade\n";
    } else {
    cout << "Ordinary year\n";
  }
  } else {
  cout << "can'n have negative years \n";
  }
}

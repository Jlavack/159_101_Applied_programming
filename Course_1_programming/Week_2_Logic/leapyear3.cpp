#include <iostream>
using namespace std;

int year, leapyear;

int main () {
  cout << "Enter a year \n";
  cin >> year;
  leapyear = 0;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      leapyear = 0;
    } else {
      leapyear = 1;
    }}
  if (year % 400 == 0) {
    leapyear = 1;
  }
    if (leapyear==1) {
      cout << "This is a leap year\n";
  } else {
    cout << "This is common year\n";
  }
}

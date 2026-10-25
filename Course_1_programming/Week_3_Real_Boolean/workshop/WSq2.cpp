#include <iostream>
using namespace std;

int year;
bool leapyear;

int main() {
  cout << "Enter a year ";
  cin >> year;
  leapyear = false;
  if (year % 4 == 0) {
    leapyear = true;
  }
  if (year % 100 == 0) {
    leapyear = false;
  }
  if (year % 400 == 0) {
    leapyear = true;
  }
  if (leapyear) {
    cout << year << " is a leap year.\n";
  } else {
    cout << year << " is NOT a leap year.\n";
  }
}

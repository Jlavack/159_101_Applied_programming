#include <iostream>
using namespace std;

bool leapyear;
int year;
char x;

int main () {
  x = x;
  cout << "Enter a year to see if it is a leapyear. type 'x' to stop\n";
  cin >> year;
  while (year != x) {
    leapyear = false;
    if ((year % 4 == 0)  && ((year % 100 != 0) || (year % 400 == 0))) {
        leapyear = true;
    }
    if (leapyear == true) {
      cout << "Year " << year << " is a leapyear!\n";
    } else {
      cout << "Year " << year << " is a common year\n";
    }
    cout << "Enter a year to see if it is a leapyear. type 'x' to stop\n";
    cin >> year;
  }
}

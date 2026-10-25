#include <iostream>
using namespace std;

int year;
bool leapyear;

int main () {
  cin >> year;
  leapyear = false;
  if(year <= 0) {
    cout << "can't be year 0 or negative, try again \n";
  } else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    leapyear = true;
  }
  if (leapyear == true) {
    cout << "Leapyear!\n";
  } else {
    cout << "Common year\n";
  }
}

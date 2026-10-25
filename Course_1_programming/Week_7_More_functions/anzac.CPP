#include <iostream>
using namespace std;

int aprilstartday();
int anzacday(int day1);
void printday(int dayofweek);

int year, firstday, anzac;

int main() {
  cout << "Enter the year ";
  cin >> year;
  firstday = aprilstartday();
  cout << "April 01 in " << year << " is on a ";
  printday(firstday);
  cout << endl;
  anzac = anzacday(firstday);
  cout << "The ANZAC Day holiday in " << year << " is on a ";
  printday(anzac);
  cout << "\nDEBUG anzac = " << anzac;  // debug – remove later
  cout << endl;
}

int aprilstartday() {
  int temp;
  cout << "0 = Sun  1 = Mon  2 = Tues  3 = Weds";
  cout << "	4 = Thurs  5 = Fri  6 = Sat\n";
  cout << "Using this coding system, enter the day of the week ";
  cout << "for 01 April in " << year << endl;
  cout << "For example, if 01 April is on a Friday then enter 5\n";
  cin >> temp;
  return temp;
}

int anzacday(int day1) {
  int temp;
  temp = (day1 + 24) % 7;  // move from 01 to 25 April
  if ((temp == 0) || (temp == 6)) {
    temp = 1;       // holiday is on Monday if 25th is Sat or Sun
  }
  return temp;
}

void printday(int dayofweek) {
  if (dayofweek == 0) {
    cout << "Sunday";
  } else if (dayofweek == 1) {
    cout << "Monday";
  } else if (dayofweek == 2) {
    cout << "Tuesday";
  } else if (dayofweek == 3) {
    cout << "Wednesday";
  } else if (dayofweek == 4) {
    cout << "Thursday";
  } else if (dayofweek == 5) {
    cout << "Friday";
  } else if (dayofweek == 6) {
    cout << "Saturday";
  }
}

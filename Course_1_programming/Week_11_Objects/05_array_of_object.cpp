#include <iostream>
using namespace std;

class date_class {
private:
  int day, month, year;
public:
  void setdate(int d, int m, int y);
  void loaddate();
  int getday() { return day; }
  int getmonth() { return month; }
  int getyear() { return year; }
  void displaydate();
};

date_class holiday[20];  // an array of objects
int i, num, year;

int main() {
  cout << "Enter the year ";
  cin >> year;
  cout << "Enter how many holidays in " << year << ": ";
  cin >> num;
  cout << "Enter all the dates that are holidays in ";
  cout << year << endl;
  for (i = 0; i < num; i++) {
    holiday[i].loaddate();
  }
  cout << "\nList of NZ holidays in " << year << endl;
  for (i = 0; i < num; i++) {
    holiday[i].displaydate();
  }
}

//--------------- methods for the date_class ------------
void date_class::setdate(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}

void date_class::loaddate() {
  cout << "Enter the date (for example: 18 4 2019) ";
  cin >> day >> month >> year;
}

void date_class::displaydate() {
  cout << day << "/" << month << "/" << year << endl;
}

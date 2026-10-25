/*1.  Copy the program from Section 11 of the notes that includes the line:
// m = today.month;  -- causes an error because month is private

a) remove the // so that the line is part of the program again.  Build the
program and confirm that it reports an error.  It is important to understand what private and public mean in a class.

b) in the class, change the line private: to public:.  Build the program and
confirm there is no longer an error.  It is important to understand what private and public mean in a class.
*/
#include <iostream>
using namespace std;

class date_class {
public:
  int day, month, year;
public:
  void setdate(int d, int m, int y);
  int getday();
  int getmonth();
  int getyear();
  void displaydate();
};

date_class today;

int main() {
  int m;
  today.setdate(23, 11, 2019);
  today.displaydate();
  m = today.getmonth();
  m = today.month;  //-- causes an error because month is private
  cout << "The month in this date is " << m << endl;
}

void date_class::setdate(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}

int date_class::getday() {
  return day;
}

int date_class::getmonth() {
  return month;
}

int date_class::getyear() {
  return year;
}

void date_class::displaydate() {
  cout << day << "/" << month << "/" << year << endl;
}

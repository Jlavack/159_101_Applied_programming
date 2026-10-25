#include <iostream>
using namespace std;

class date_class { //all data private
private:
  int day, month, year;
public: //all methods public
  void setdate(int d, int m, int y);
  int getday();
  int getmonth();
  int getyear();
  void displaydate();
}; //all the work happens up here in the class

date_class today;

int main() {
  int m;
  today.setdate(23, 11, 2019); //calling method set date
  today.displaydate(); //calling methods display date
  m = today.getmonth(); //invokes the getmonth methods, which has been loaded by "set" function.
// m = today.month;  -- causes an error because month is private
  cout << "The month in this date is " << m << endl;
}

void date_class::setdate(int d, int m, int y) {//loads variables.
  day = d;
  month = m;
  year = y;
}

int date_class::getday() {//sends day back to main
  return day;
}

int date_class::getmonth() {//sends month back to main
  return month;
}

int date_class::getyear() {//sends year back to main
  return year;
}

void date_class::displaydate() {
  cout << day << "/" << month << "/" << year << endl;
}

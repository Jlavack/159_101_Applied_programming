#include <iostream>
using namespace std;

class date_class {
public:
  int day, month, year;
};

date_class today;

int main() {
  today.day = 23;
  today.month = 11;
  today.year = 2019;
  cout << today.day << "/" << today.month;
  cout << "/" << today.year << endl;
}

//8*. Write a program that reads in a year and then calculates the date of Easter
//Sunday for that year. When the program is running, the screen should look
//something like this:
//		Date of Easter Sunday: 27 March 2016
//Use the following calculations:
/*		result = 22 + a + b
		a = (19c + 24) remainder 30
		b = (2d + 4e + 6a + 5) remainder 7
		c = year remainder 19
		d = year remainder 4
		e = year remainder 7
If result is 31 or less, the month is March and the day is the result.
If result is greater than 31, the month is April and the day is the result – 31.
Hint: Make sure that you get the calculations in the right order.
Note: The calculations are only accurate for years from 1900 to 2100. */

#include <iostream>
using namespace std;

int year, result, a, b, c, d, e;

int main () {
  cin >> year;
  c = year % 19;
  d = year % 4;
  e = year % 7;
  a = ((19*c + 24) % 30);
  b = ((2*d + 4*e + 6*a + 5) % 7);
  result = 22 + a + b;
  if (result <= 31) {
    cout << "Date of Easter Sunday: " << result << " March "<< year << endl;
  } else if (result > 31) {
    cout << "Date of Easter Sunday: " << (result - 31) <<" April  " << year << endl;
  }
}

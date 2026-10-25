//20001249 John Lavack
/*Note the use of the exit() function in lines 17, 27, 33 and 41.
I take this to be acceptable as it is taught in week 3 */

#include <iostream>
using namespace std;

int days, month, year, difference, newdays, newmonth, newyear;
bool leapyear, bc;

int main () {
  leapyear = false;
  bc = false;
  cout << "Enter a date in dd mm yyyy format: \n";
  cin >> days >> month >> year;
  cout << endl;

  //BC check
  if (year <= -1) {
    bc = true;
    year = -1 * year;
  } else if (year == 0) {
    bc = true;
    year = 1;
  }

  //leapyear check: current leapyaers started in 1582. Caeser strarted them in 45 BC, they were on specific years, not following the general, modern rule.
  if ((bc == false) && (year > 1582) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
    leapyear = true;
  } else if ((bc == true) && ((year == 45 || year == 42 || year == 39 || year == 36 || year == 33 || year == 30 || year == 27 || year == 24 || year == 21 || year == 18 || year == 15 || year == 12 || year == 9))) {
    leapyear = true;
  } else {
    leapyear = false;
  }

  if (month <= 0 || month > 12) {
    cout << "ERROR, month must be between 1 and 12. Try again.\n";
    exit(1);
  }

  if (((days <= 0 || days > 31) && (month == 1 || month == 3|| month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) || ((days <=0 || days > 30) && (month == 4 || month == 6 || month == 9 || month == 11)) || ((days <= 0 || days > 28) && (month == 2) && (leapyear == false)) || ((days <= 0 || days > 29) && (month == 2) && (leapyear == true))) {
    cout << "ERROR, a real day must be entered. Try again.\n";
    exit(1);
  }

  //check difference input requirement
  cout << "enter difference in days between -7 and 7 \n";
  cin >> difference;
  cout << endl;
  if (difference <-7 || difference > 7) {
    cout << "ERROR difference is out of bounds. Try again with a number between -7 and 7\n";
    exit(1);
  }

  //date logic
// January
  if ((month == 1) && ((days + difference) > 31)) {
    newdays = (difference - 31) + days;
    newmonth = month + 1;
    newyear = year;
  } else if ((month == 1) && ((days + difference) <= 0)) {
    newdays = (31 + difference) + days;
    newmonth = 12;
    newyear = year - 1;
// December
  } else if ((month == 12) && ((days + difference) > 31)) {
    newdays = (difference - 31) + days;
    newmonth = 1;
    newyear = year + 1;
  } else if ((month == 12) && ((days + difference) <= 0)) {
    newdays = (30 + difference) + days;
    newmonth = month - 1;
    newyear = year;
//positive differences
  } else if (((days + difference) > 31) && ((month == 5)||(month == 7)||(month == 10))) {
    newdays = (difference - 31) + days;
    newmonth = month + 1;
    newyear = year;
  } else if (((days + difference) > 30) && ((month == 4)||(month == 6)||(month == 9)||(month == 11))) {
    newdays = (difference - 30) + days;
    newmonth = month + 1;
    newyear = year;
//negative differences
  } else if (((days + difference) <= 0) && ((month == 5)||(month == 7)||(month == 10))) {
    newdays = 30 + difference + days;
    newmonth = month - 1;
    newyear = year;
  } else if (((days + difference) <= 0) && ((month == 4)||(month == 6)||(month == 9)||(month == 11))) {
    newdays = 31 + difference + days;
    newmonth = month - 1;
    newyear = year;
//August to July
  } else if ((month == 8) && ((days + difference) > 31)) {
    newdays = (difference - 31) + days;
    newmonth = month + 1;
    newyear = year;
  } else if ((month == 8) && ((days + difference) <= 0)) {
    newdays = (31 + difference) + days;
    newmonth = month -1;
    newyear = year;
//February common year
  } else if ((month == 2) && (leapyear == false) && ((days + difference) > 28)) {
    newdays = (difference - 28) + days;
    newmonth = month + 1;
    newyear = year;
  } else if ((month == 2) && (leapyear == false) && ((days + difference) <= 0)) {
    newdays = (31 + difference) + days;
    newmonth = month - 1;
    newyear = year;
//February leapyear
  } else if ((month == 2) && (leapyear==true) && ((days + difference) > 29)) {
    newdays = (difference - 29) + days;
    newmonth = month + 1;
    newyear = year;
  } else if ((month == 2) && (leapyear == true) && ((days + difference) <= 0)) {
    newdays = (31 + difference) + days;
    newmonth = month - 1;
    newyear = year;
//March commonyear
  } else if ((month == 3) && (leapyear == false) && ((days + difference) > 31)) {
    newdays = (difference - 31) + days;
    newmonth = month + 1;
    newyear = year;
  } else if ((month == 3) && (leapyear == false) && ((days + difference) <= 0)) {
    newdays = (28 + difference) + days;
    newmonth = month - 1;
    newyear = year;
//March Leapyear
  } else if ((month == 3) && (leapyear==true) && (((days + difference) > 31))) {
    newdays = (difference - 31) + days;
    newmonth = month + 1;
    newyear = year;
  } else if ((month == 3) && (leapyear == true) && ((days + difference) <= 0)) {
    newdays = (29 + difference) + days;
    newmonth = month - 1;
    newyear = year;
//Standard case, no month cross overs
  } else {
    newdays = days + difference;
    newmonth = month;
    newyear = year;
  }
//Print results of input
  if (bc == true) {
    cout << "The final date is: " << newdays << " / " << newmonth << " / " << newyear << " BC\n" << endl;
  } else if (bc == false) {
    cout << "The final date is: " << newdays << " / " << newmonth << " / " << newyear << endl << endl;
  }
}

/* Test cases:
Positive difference with no month or year cross over <- pass
Negative difference with no month or year cross over <- pass
Difference of 0 returns input date <- pass
Month cross overs:
  - 31 to 30 day month, positive difference, monht increase <- pass
  - 31 to 30 days month, negative difference, month decrease <- pass
  - 31 to 31 day months, (August to July) negative difference, month decrease <- pass
  - 30 to 31 day monts, positive difference, month increase <- pass
  - 30 to 31 day month, negative difference, month decrease <- pass
  - February to March, positive difference, common year, month increase <- pass
  - February to March, positive difference, leap year, month decrease <- pass
  - March to February, negative difference, common newyear, month decrease <- pass
  - March to February, negative difference, leapyear, month increase <- pass
Year cross overs:
  - December to January, positive difference, year increase <- pass
  - January to December, negative difference, year decrease <- pass
Leapyears <- pass
Error cases:
 - Zero year is not allowed <- pass, but can decrease from date 1/1/1 to 31/12/0
    **Changed: allowed to go to year 1 BC. For fun :)
    ** included negative years as BC output, also for fun and testing.
 - Negative year is not allowed- <- pass
 - Difference out of bounds; less that -7 or greater than 7 <- pass
 - Month 0 or less not allowed <- pass
 - Month greater than 12 not allowed <- pass
 - Negative day values not allowed <- pass
 - more than 31 days for Jan, Mar, May, Jul, Aug, Oct, Dec <- pass
 - more than 30 days for Apr, Jun, Sept, Nov <- pass
 - more than 28 days in Feb on a common year <- pass
 - more than 29 days in Feb on a leapyear <- pass
 */

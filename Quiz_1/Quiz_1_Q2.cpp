#include <iostream>
using namespace std;

int days, amount, weeks, hours;

int main() {
   cout << "Enter an amount of hours: ";
   cin >> amount;
   days = amount / 24;
   hours = amount % 24;
   weeks = days / 7;
   if (weeks == 0) {
     cout << amount << " hours = " << days << " days, ";
     cout << hours << " hours.\n";
   } else {
     cout << amount << " hours = " << weeks << " weeks, ";
     cout << days << " days, " << hours << " hours.\n";
   }
 }

#include <iostream>
using namespace std;

/* a program to read in positive numbers and add them together */

int number, total;

int main() {
  total = 0;
  number = 999;
  while (number >= 0) {   //initiates the trail condition
    cout << "Enter a number (-1 to stop) ";
    cin >> number; // overwrites 999. When we exit with -1, will add -1 to the running total, not what we want.
    total = total + number;
  }
  cout << "The total is " << total << endl;
}

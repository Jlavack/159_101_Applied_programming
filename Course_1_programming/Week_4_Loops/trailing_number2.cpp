#include <iostream>
using namespace std;

/* a program to read in numbers and add them together */

int number, total;

int main() {
  total = 0;
  cout << "Enter a number (-1 to stop) ";
  cin >> number;
  while (number >= 0) {
    total = total + number;
    cout << "Enter a number (-1 to stop) ";
    cin >> number; // having this here, means we don't subtract 1 from the total if we exit, as it is done after the total summation. 
  }
  cout << "The total is " << total << endl;
}

#include <iostream>
using namespace std;

int number, total;

/* a program to read in numbers and add them together */

int main() {
  total = 0;
  while (true) {
    cout << "Enter a number (-1 to stop) ";
    cin >> number;
    if (number < 0) {
      break;
    }
    total = total + number;
  }
  cout << "The total is " << total << endl;
}

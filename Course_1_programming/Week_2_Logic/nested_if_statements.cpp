#include <iostream>
using namespace std;

int value;

int main() {
  cout << "Enter an integer value ";
  cin >> value;
  if (value < 10) {
    cout << "This value is less than 10 ";
    if (value >= 0) {
      cout << "and is positive.\n";
    }
    if (value < 0) {
      cout << "and is negative.\n";
    }
  }
  if (value >= 10) {
    cout << "This value is greater than or equal to 10\n";
  }
}

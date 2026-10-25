#include <iostream>
using namespace std;

int value;

int main() {
  cout << "Enter an integer value ";
  cin >> value;
  if ((value < 10) && (value != 10)) {
    cout << "The value is less than 10";
    if (value < 0) {
      cout << " and is negative\n";
    }
    if (value >0) {
      cout << " and is positive\n";
    }
  } else {
    if (value == 10) {
      cout << "This is 10\n";
    } else {
      cout << "This value is greater than 10\n";
    }
  }
}

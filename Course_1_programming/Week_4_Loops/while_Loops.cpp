#include <iostream>
using namespace std;

int number;

int main() {
  number = 38;                   // initialise the loop variable
  while (number <= 54) {
    cout << number << endl;
    number ++;        // can we use a shortcut here?
  }
}

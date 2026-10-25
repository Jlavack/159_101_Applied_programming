//1. Write a program that reads in a number and checks if the number is
// in the range from 99 to 103, less than 99, or greater than 103.
//  Give three possible cases that you could test your program with.

#include <iostream>
using namespace std;

int input, output;

int main () {
  cout << "input an integer betwee 99 and 103\n";
  cin >> input;
  if ((input >= 99) && (input <= 103)) {
    cout << "In range\n";
  } else if (input < 99) {
    cout << "Too low \n";
  } else if (input > 103) {
    cout << "Too high \n";
  }
}

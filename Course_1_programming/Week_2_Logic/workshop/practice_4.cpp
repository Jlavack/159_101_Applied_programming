//4. Write a program that checks whether a number is even or odd and for even
// numbers, whether the number ends with a zero.  Examples of what the display
// should look like are given below.
//For the integer 40:		Even number that ends in zero
//For the integer 4:		Even number
//For the integer 5:		Odd number
//Hint: An even number has a remainder of 0 when divided by 2.

#include <iostream>
using namespace std;

int input;

int main () {
  cin >> input;
  if ((input % 10 == 0) && (input % 2 == 0) && (input != 0)) {
    cout << "The number is even and ends with 0\n";
  } else if ((input % 2 == 0) && (input != 0)) {
    cout << "The number is even. \n";
  } else if (input == 0) {
  cout << "you have entered zero  \n";
  } else {
    cout << "The number is odd \n";
  }
}

//2. Write a program that reads in two numbers and prints out the bigger number first.
// Test your program on identical values.
//  Modify it to display a suitable message if the numbers are identical.

#include <iostream>
using namespace std;

int a, b, big;

int main () {
  cout << "Enter two numbers and we will figure out the descending order\n";
  cin >> a;
  cin >> b;
  big = a;
  if (b > big) {
    big = b;
    cout << "the order is " << big << "   " << a << endl;
  } else if (b < big) {
    cout << "the order is " << big << "   " << b << endl;
  } else if (big == b) {
    cout << "Thought you could trick me, they are the same number!\n";
  }
}

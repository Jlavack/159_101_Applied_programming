#include <iostream>
using namespace std;

int smallest, number;

int main() {
  cout << "Enter the first number (-1 to stop) ";
  cin >> number;
  smallest = number;
  while (number > 0) {
    if (number < smallest) {
      smallest = number;
    }
    cout << "The smallest number so far is " << smallest << endl;
    cout << "Enter a number (-1 to stop) ";
    cin >> number;
  }
  cout << "The smallest number is " << smallest << endl;
}

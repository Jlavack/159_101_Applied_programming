#include <iostream>
using namespace std;

int biggest, number;

int main() {
  cout << "Enter the first number (-1 to stop) ";
  cin >> number;
  biggest = number;
  while (number > 0) {
    if (biggest < number) {
      biggest = number;
    }
    /* put an extra cout statement here */
    cout << "Enter a number (-1 to stop) ";
    cin >> number;
  }
  cout << "The biggest number is " << biggest;
}

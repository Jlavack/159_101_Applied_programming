#include <iostream>
using namespace std;

int number, reverse, digit, temp;

int main() {
  cout << "Enter an integer ";
  cin >> number;
  temp = number;
  reverse = 0;
  while (temp > 0) {
    digit = temp % 10;
    reverse = reverse * 10 + digit;
    temp = temp / 10;
  }
  cout << "Number is " << number;
  cout << " and the reverse is " << reverse;
}

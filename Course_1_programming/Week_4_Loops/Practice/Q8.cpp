/* Write a program that reads in an integer number and displays the sum of the digits.
For example:  the sum of the digits of 152 = 8
Are both a while loop and a for loop possible?
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int number, sum, temp, digit;

int main () {
  cout << "Enter a number\n";
  cin >> number;
  temp = number;
  sum = 0;
  while (temp > 0) {
    digit = temp % 10; //working from left to right of number
    sum = sum + digit;
    temp = temp / 10;
  }
  cout << "The sum of the digits is: \n";
  cout << number << " = " << sum << endl;
}

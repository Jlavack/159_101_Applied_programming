/*
4. Write a program that will print all the even numbers from 180 to 200 inclusive,
one number per line.  Place a heading, "Even Numbers between 180 and 200" above the
list, and the sum of the numbers below the list. (Sum should be 2090.)
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int number, i, temp, sum;

int main () {
  number = 180;
  i = 0;
  sum = number; //initialise sum outside of loop, else it's too small
  cout << "Even numbers between 180 and 200\n";
    while (i <= 9) {
    temp = number;
    number = temp + 2;
    i++;
    sum = sum + number;
    cout << number << endl;
  }
  cout << "The sum is: " << sum << endl;
}

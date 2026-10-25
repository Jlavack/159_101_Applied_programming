/*5. Write a program that reads in a positive integer up to nine digits long,
 and sets up an array to store a count of the number of times each of the digits
 0 - 9 appears in the number.  Store the number of times 0 appears, in position 0
 in your array, the number of times 1 appears, in position 1 of your array and so on.
   Display the results in the format:
0 occurs 2 times
1 occurs 0 times:
9 occurs 1 times */

#include <iostream>
#include <cstdlib>
using namespace std;

int input, temp, digit, i;
int digitcount[10];

int main () {
  for (i=0; i<=10; i++) {
    digitcount[i] = 0;   //initialise array to 0
  }
  cout << "Enter a number: " << endl;
  cin >> input;
  if (input > 999999999) {
    cout << "ERROR, input is up ot 9 digits long" << endl;
    exit(2);
  }
  temp = input;
  while (temp > 0) {
    digit = temp % 10; //trim of the last number
    digitcount[digit]++ ; //store the number in the array as its value
    temp = temp/10; //remove the last number
  }
  for (i=0; i< 10; i++) {
    cout << i << " occurs " << digitcount[i] << " times" << endl;
  }
}

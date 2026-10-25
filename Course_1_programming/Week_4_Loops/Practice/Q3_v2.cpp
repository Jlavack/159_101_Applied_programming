/*3. Write a program that reads in a value from the user.
 The value must be a power of 2. The program must then display all powers
 of 2 from 1 up to (and including) the value read in from the user. For example:
- if the user types in 32, the program should display       1  2  4  8  16  32
- if the user types in 4, the program should display         1  2  4
etc. Are both a while loop and a for loop possible?
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int i, input, number, temp;

int main () {
  cout << "Enter a number and see its powers of 2. Number must be a power of 2\n";
  cin >> input;

  while (!((input !=0 ) && (input &(input - 1)) == 0)) {
    cout << "ERROR, not a power of two\n";
    cin >> input;
  }

 cout << "The powers, in ascending order are: \n";

  i = 0;
  number = input;
  temp = input/number; // will equal 1
  while (i <= sqrt(input)) {
      if (temp <= input) {
      cout << temp << endl;
    }
    number = temp * 2;
    temp = number; //update for the loop, temp becomes the last number
    i++;
  }
}

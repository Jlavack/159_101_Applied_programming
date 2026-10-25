/*There are two four-digit numbers that become reversed when multiplied by a
 single-digit number (not 0 or 1).  Example: 1089 * 9 produces 9801.
 Find the other four-digit number with this property.
*/
#include <iostream>
using namespace std;

int number, reverse, digit, temp, multiplier;

int main() {

  multiplier = 2; //read in multiplier
  cout << "Number        Multiplier\n";
  while (multiplier <=9) {
    number = 1000; //initialise number
    while (number <= 9999) {
      temp = number;
      reverse = 0;
      while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
      } //closes reverse
      if ((reverse / multiplier == number) && (number * multiplier == reverse)) {
        cout.width(4);
        cout << left << number;
        cout.width(14);
        cout << right << multiplier << endl;
      } //closes if statement
      number ++;
    } //closes number cycle
      multiplier ++;
  } // closes multiplier cycle
}

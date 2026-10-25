/*3. Write a function that counts and returns the number of digits in a positive
integer eg for the integers 43, 105 and 6, the return should be 2, 3 and 1 respectively.
*/

#include <iostream>
using namespace std;

int count(int input);

int main () {
  int input;
  cout << "Input a number to count its digits: " << endl;
  cin >> input;

 cout << "There are " << count(input) << " digits." << endl;
}

int count(int input) {
  int temp, digit;

  digit = 0;
  while (input > 0) {
    temp = input % 10;
    //cout << "DEBUG temp" << temp << endl;
    digit ++;
    //cout << "DEBUG digit" << digit << endl;
    temp = input/10;
    //cout << "DEBUG temp" << temp << endl;
    input = temp;
    //cout << "DEBUG input" << input << endl;
  }

return digit;
}

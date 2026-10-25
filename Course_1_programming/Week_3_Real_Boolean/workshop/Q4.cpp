#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int a, b, c, d, input;
bool position, zeros;

int main () {
  position = 0;
  zeros = 0;
  cout << "Enter the four digits of a number separated by spaces \n";
  cin >> a >> b >> c >> d;
  input = (a * 1000) + (b * 100) + (c * 10) + d;
  cout << "Right align the input? Enter 1 for right, 0 for left \n";
  cin >> position;
  if (position == true) {
  cout << "Use leading zeros? Enter 1 for no, 0 for yes \n";
  cin >> zeros;
}

  if (position == true) {
    if (zeros == false) {
      cout << "The output is: ";
      cout.width(6);
      cout.fill('0');
      cout << right << input << endl;
    } else if (zeros == true) {
      cout << "The output is: ";
      cout.width(6);
      cout << right << input << endl;
    }
  } else {
      cout << "The output is: ";
      cout.width(6);
      cout << left << input << endl;
  }
}

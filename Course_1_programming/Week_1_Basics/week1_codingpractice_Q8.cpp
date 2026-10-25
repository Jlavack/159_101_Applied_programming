#include <iostream>
using namespace std;
//takes a value and splits it into the place values
int value, a, b, c, d, ales, bles, cles, dles;

int main () {
  cout << "Enter a value up to four digits and press enter:";
  cin >> value;
  ales = (value - (value % 1000)); // divide by 1000
  a = ales/1000;
  bles = ((value - ales) - (value % 100));
  b = bles/100;
  cles = ((value - (ales + bles)) - (value % 10));
  c = cles/10;
  d = ((value - (ales + bles + cles)) - (value % 1));

  cout << "The first digit is: " << a << endl;
  cout << "The second digit is: " << b << "\nThe third digit is: " << c << endl;
  cout << "The fourth digit is: " << d << endl;
}

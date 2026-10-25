#include <iostream>
using namespace std;

int a, b, c;

int main() {
  a = 3;
  b = 5;
  c = 2;
  if ((a != 3) || (b != 2)) {
    cout << 7 % a << " wow\n";
  } else {    /*not to execute since condition one is met*/
    cout << 7 + a << ", " << c << endl;
  }
  if ((a + c <= b) && (b % a == c)) {     /*this will print out*/
    a = b / a;   /*assigns to a a new value*/
    cout << "b / a = " << a << endl;
  }
  if (!(a < 2)) {        /*will not print this since a will = 1, so a < 2 */
    cout << a << ", " << b << ", " << c << endl;
  }
}

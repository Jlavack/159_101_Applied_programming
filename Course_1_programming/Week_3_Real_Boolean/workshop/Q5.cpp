#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int a, b, c, d ,e, f, g, h;

int main () {
  a = 3;
  b = pow(a, 2);
  c = 6;
  d = pow(c, 2);
  e = 9;
  f = pow(e,2);
  g = 12;
  h = pow(g, 2);
  cout << a << cout.fill(' ') << cout.width(9) << right << b << endl;
  cout << c << cout.fill(' ') << cout.width(8) << right << d << endl;
  cout << e << cout.fill(' ') << cout.width(8) << right << f << endl;
  cout << g << cout.fill(' ') << cout.width(6) << right << h << endl;
}

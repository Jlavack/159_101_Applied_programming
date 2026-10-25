#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int a, b, c, d;
bool w, x, y, z;

int main () {
  cin >> a >> b >> c >> d;
  w = false;
  x = false;
  y = false;
  z = false;

  if (a < 0 ) {
    w = true;
    a = abs(a);
  }
  if (b < 0 ) {
    x = true;
    b = abs(b);
  }
  if (c < 0 ) {
    y = true;
    c = abs(c);
  }
  if (d < 0 ) {
    z = true;
    d = abs(d);
  }

  if ((w ==false)&&(x==false)&& (y==false) && (z==false)) {
    cout << "There are no negative values \n";
    cout << "The stored values are: " << a << ", " << b << ", " << c << ", " << d << endl;
  } else if ((w == true) || (x== true) || (y==true) || (z== true)) {
    cout << "The abs function was called for: "<< endl;
    if (w == true) {
      cout << -1*a << endl;
    }
    if (x==true) {
      cout << -1*b << endl;
    }
    if (y==true) {
      cout << -1*c << endl;
    }
    if (z==true) {
      cout << -1*d << endl;
    }
    cout << "The stored values are: " << a << ", " << b << ", " << c << ", " << d << endl;
  }


}

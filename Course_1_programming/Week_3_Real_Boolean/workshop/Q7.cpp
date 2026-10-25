#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int a, b, c;
float x, y ,z, sum;

int main () {
  cout << "Enter three integers: " << endl;
  cin >> a >> b >> c;
  cout << "Reciprocals: " << "1/" << a << ", 1/" << b << ", 1/" << c << endl;
  x = 1.0/a;
  y = 1.0/b;
  z = 1.0/c;
  sum = x+y+z;
  cout << "Converting to decimals: " << x << ", " << y << ", " << z << endl;
  cout << "Sum: " << sum << endl;
}

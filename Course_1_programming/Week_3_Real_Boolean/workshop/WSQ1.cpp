#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include <iostream>
#include <iomanip>
using namespace std;

float a, b, c;

int main() {
  a = 1.0 / 3.0;
  b = a * 100000000.0;
  cout << setprecision(12) << fixed << a << ", ";
  cout << setprecision(3) << fixed << b << endl;
}

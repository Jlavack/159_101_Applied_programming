#include <iostream>
using namespace std;

int a, b, c;

int main () {
  a=0;
  b=1;
  c=0;
  while (c <1000) {
    c = a+b;
    cout << " " << c << endl;
    a = b;
    b = c;
  }
}

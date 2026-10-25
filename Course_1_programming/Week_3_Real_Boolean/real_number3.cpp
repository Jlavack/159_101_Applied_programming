#include <iostream>
using namespace std;

int a;
float m;

int main () {
  a = 5;
  m = a;
  cout << "m is " << m << endl;
  m = 8.9;
  a = m;
  cout << "a is " << a << endl;
}

#include <iostream>
using namespace std;

int absolute (int x);

int main() {
  int abs, n;
  cout << "Enter a number and get the absolute value" << endl;
  cin >> n;
  cout << endl;
  abs = absolute(n);
  cout << abs << endl;
}

int absolute (int x) {
  int result;
  if (x > 0) {
    result = x;
  } else {
    result = -1 * x;
  }
  return result;
}

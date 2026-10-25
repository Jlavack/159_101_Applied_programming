#include <iostream>
using namespace std;

int a, b, c, big;

int main() {
  cout << "Enter three integer values\n";
  cin >> a >> b >> c;
  big = a;
  if (big < b) {
    big = b;
  }
  if (big < c) {
    big = c;
  }
  cout << "The biggest number is " << big;
}

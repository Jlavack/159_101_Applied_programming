#include <iostream>
using namespace std;

int a, b, c, low;

int main() {
  cout << "Enter three integer values\n";
  cin >> a >> b >> c;
  low = a;
  if (low > b) {
    low = b;
  }
  if (low > c) {
    low = c;
  }
  cout << "The smallest number is " << low;
}

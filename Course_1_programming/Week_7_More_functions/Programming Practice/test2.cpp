#include <iostream>
using namespace std;

int main() {
  int i, x, result;
  cin >> x;
  result = 1;
  for(i = 2; i <= x; i++) {
    result *= i;
  }
  cout << result << endl;
}

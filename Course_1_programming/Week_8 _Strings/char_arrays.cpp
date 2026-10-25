#include <iostream>
using namespace std;

char data[63];
int x;

int main() {
  cin >> x;

  data[34] = 'h';
  data[57] = 's';
  cout << data[x] << endl;//will only show if x = 34 or 57
}

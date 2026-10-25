#include <iostream>
#include <cstdio>
using namespace std;

char c;
int code;

int main() {
  cout << "\n\nPress a key followed by Enter ";
  c = getchar();
  getchar();       // to flush the enter from the input buffer
  code = c;
  cout << "\nThe character is " << c << endl;
  cout << "\nThe character " << c << " has ASCII code " << code << endl;
}

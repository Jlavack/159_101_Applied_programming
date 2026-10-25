#include <iostream>
using namespace std;

int i, input;
char x;
int a[4], b[4], result[4];

int main () {
  cout << "Enter 4 numbers in array 1\n";
  for (i=1; i <=4; i++) {
    cin >> input;
    a[i] = input;
  }

  cout << "Enter 4 numbers in array2\n";
  for (i=1; i <=4; i++) {
    cin >> input;
    b[i] = input;
  }

  for (i=1; i <=4 ; i++) {
    result[i] = a[i] + b[i];
    cout << a[i] << " + " << b[i] << " = " << result[i] << endl;
  }
}

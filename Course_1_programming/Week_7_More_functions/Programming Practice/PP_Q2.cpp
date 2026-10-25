/*2. Write a function with the prototype int max(int a, int b, int c) which
returns the largest of the three values.  The values must be read inside main
– do not read values inside the function.*/

#include <iostream>
using namespace std;

int max(int a, int b, int c);

int main () {
  int a, b, c;

  cout << "Enter three numbers and the largest will be returned: \n";
  cin >> a >> b >> c;
  cout << "The largest number is: " << max(a, b, c) << endl;
}


int max(int a, int b, int c) {
  int max;
  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}

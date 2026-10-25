#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

float a, b, c, dif, root, result;

int main () {
  cout << "Enter two numbers to get the root of their absolute difference: \n";
  cin >> a >> b;
  dif = sqrt(fabs(a - b));
  cout << "the answer is " << dif << endl;
}

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

float a, b, c, result;
int d, e;

float average(float a, float b, float c, float d, float e) {
  float sum, av;
  int number;
  number = 5;
  sum = a + b + c + d + e;
  av = sum/number;
  // to store sum value
  // calculate sum value
  // calculate average value
  // and return to caller function
  return av;
}


int main () {
  cout << "Enter three real numbers followed by two integers: \n";
  cin >> a >> b >> c >> d >> e;
  result = average(a, b, c, d, e);
  cout << "the average is: " << result << endl;
}

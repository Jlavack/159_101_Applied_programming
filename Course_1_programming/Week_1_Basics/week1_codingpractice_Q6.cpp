#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

double a, b, c, result;

int main () {
  cout << "Enter three numbers and press enter each time. We will calculate the product" << endl;
  cout << "Type in the first number: ";
  cin >> a;
  cout << "Type in the second number: ";
  cin >> b;
  cout << "Type in the third number: ";
  cin >> c;
  result = double(a * b * c);
  cout << "The product is ... " << setprecision(4) << result;
}

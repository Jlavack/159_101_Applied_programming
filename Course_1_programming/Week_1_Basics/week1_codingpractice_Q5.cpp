#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

double n, result;

int main () {
  cout << "Enter a number, n ";
  cin >> n;
  result = (n / (n-1));
  cout << "\n The answer is... " << setprecision(3) << result;
}

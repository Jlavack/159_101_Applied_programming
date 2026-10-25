#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

float pi, r, circumference;

int main () {
  cout << "Enter a radius to find the circumference of the circle to 3 dp ";
  pi = 3.14159;
  cin >> r;
  circumference = 2*pi*r;
  cout << setprecision(3) << fixed << circumference << endl;

}

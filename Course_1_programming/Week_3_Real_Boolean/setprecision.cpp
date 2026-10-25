#include <iostream>
#include <iomanip>
using namespace std;

float result, a, b;

int main() {
  cin >> a;
  cin >> b;
  result = a / b;   // display this result to 7 decimal places
  cout << "The result is ";
  cout << setprecision(7) << fixed << result << endl;
}

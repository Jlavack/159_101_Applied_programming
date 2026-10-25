#include <iostream>
#include <cmath>    // *IMPORTANT* - an extra #include

using namespace std;

float side1, side2, result, hypotenuse;

int main() {
  cout << "Enter the length of side one ";
  cin >> side1;
  cout << "Enter the length of side two ";
  cin >> side2;
  result = (side1 * side1) + (side2 * side2);
  hypotenuse = sqrt(result);
  cout << "The hypotenuse is " << hypotenuse << endl;
}

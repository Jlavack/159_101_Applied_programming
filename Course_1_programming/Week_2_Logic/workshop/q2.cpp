/* A program to find and display the biggest of three integers */

#include <iostream>
using namespace std;

int num1, num2, num3;

int main() {
  cout << "Type in three different integers: ";
  cin >> num1 >> num2 >> num3;
  if ((num1 > num2) && (num1 > num3)) {
    cout << "The biggest number is " << num1 << endl;
  } else if ((num2 > num1) && (num2 > num3)) {
    cout << "The biggest is " << num2 << endl;
  } else if ((num3 > num1) && (num3 > num1)) {
      cout << "The biggest number is " << num3 << endl;
    } else if ((num1 == num2) && (num1 == num3)) {
    cout << "The numbers are the same " << endl;
  } else {
    cout << "The biggest number is " << num1 << endl;
  }
}

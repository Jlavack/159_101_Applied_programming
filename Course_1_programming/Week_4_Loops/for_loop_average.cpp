#include <iostream>
using namespace std;

int counter;
float number, total, average;

int main() {
  total = 0.0;
  for (counter = 0; counter < 4; counter++) {
    cout << "Enter a number ";
    cin >> number;
    total = total + number;
  }
  average = total / 4.0;
  cout << "The average is " << average;
}

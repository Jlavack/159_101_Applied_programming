#include <iostream>
using namespace std;

int total, number;

int main () {
  total = 0;
  number = 87;
  cout << "Add up the numbers from 87 to 93\n";
  while (number <=93) {
    total = total + number;
    number ++;
  }
  cout << "The total is " << total << endl;
}

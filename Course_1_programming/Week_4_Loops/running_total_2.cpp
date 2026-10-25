#include <iostream>
using namespace std;

float number, total;
int count;

int main() {
  total = 0;
  count = 0;
  cout << "Enter four numbers to be added together:\n";
  while (count < 7) {
    cout << "Enter a number ";
    cin >> number;
    total = total + number;
    count++;                      // using a shortcut here4
    cout << "The running total is " << total << endl;
    }
  cout << "The total is " << total << endl;
}

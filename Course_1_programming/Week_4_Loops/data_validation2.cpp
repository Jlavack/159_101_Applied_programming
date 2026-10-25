#include <iostream>
#include <cstdlib>          // we use exit from cstdlib
using namespace std;

int mark1, mark2, result;

int main() {
  cout << "Enter the mark for test 1 (0 to 50): ";
  cin >> mark1;
  if ((mark1 < 0) || (mark1 > 50)) {
    cout << "ERROR: mark 1 must be from 0 to 50\n";
    cout << "Program will now close";
    exit(10);
  }
  cout << "Enter the mark for test 2 (0 to 50): ";
  cin >> mark2;
  if ((mark2 < 0) || (mark2 > 50)) {
    cout << "ERROR: mark 2 must be from 0 to 50\n";
    cout << "Program will now close";
    exit(20);
  }
  result = mark1 + mark2;
  cout << "The final result is " << result;
}

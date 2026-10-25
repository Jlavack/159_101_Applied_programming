#include <iostream>
using namespace std;

void readmark();

int test1, test2, maxmark, temp, result;
/* note - test 1 is out of 30 and test 2 is out of 70 */

int main() {

// section 1: get the mark for test 1
  maxmark = 30;
  readmark();
  test1 = temp;

// section 2: get the mark for test 2
  maxmark = 70;
  readmark();
  test2 = temp;

// section 3: calculate the final result
  result = test1 + test2;
  cout << "Final result is " << result;
}

void readmark() {
  cout << "Enter the mark for the test ";
  cin >> temp;
  while ((temp < 0) || (temp > maxmark)) {
    cout << "ERROR: mark must be from 0 to " << maxmark << endl;
    cout << "Enter the mark again ";
    cin >> temp;
  }
}

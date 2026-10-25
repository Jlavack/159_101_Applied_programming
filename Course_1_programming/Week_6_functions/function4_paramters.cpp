#include <iostream>
using namespace std;

void readmark(int maxmark);

int test1, test2, temp, result;

/* note - test 1 is out of 30 and test 2 is out of 70 */

int main() {
  readmark(30);
  test1 = temp;
  readmark(70);
  test2 = temp; //storing the funciton output, temp, as test2.
  result = test1 + test2;
  cout << "Final result is " << result;
}

void readmark(int maxmark) {
  cout << "Enter the mark for the test ";
  cin >> temp;
  while ((temp < 0) || (temp > maxmark)) {
    cout << "ERROR: mark must be from 0 to " << maxmark << endl;
    cout << "Enter the mark again ";
    cin >> temp;
  }
}

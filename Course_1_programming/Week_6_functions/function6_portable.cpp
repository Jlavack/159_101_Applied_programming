#include <iostream>
using namespace std;

int readmark(int n, int maxmark);

/* note - test 1 is out of 30 and test 2 is out of 70 */

int main() {
  int test1, test2, result;
  test1 = readmark(1, 30);
  test2 = readmark(2, 70);
  result = test1 + test2;
  cout << "Final result is " << result;
}

int readmark(int n, int maxmark) {
  int mark;
  cout << "Enter the mark for test " << n << ": ";
  cin >> mark;
  while ((mark < 0) || (mark > maxmark)) {
    cout << "ERROR: mark must be from 0 to " << maxmark << endl;
    cout << "Enter the mark again ";
    cin >> mark;
  }
  return mark;
}

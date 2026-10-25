#include <iostream>
using namespace std;

// there are 8 questions in an exam
// if you get zero for 4 or more questions - you fail
// otherwise you pass if your total mark is >= 50

int count, zeromark;
float mark, total;

int main() {
  total = 0.0;
  zeromark = 0;
  for (count = 0; count < 8; count++) {
    cout << "Enter mark for Question " << count+1 << ": ";
    cin >> mark;
    total = total + mark;
    if (mark == 0.0) {
      zeromark++;
    }
  }
  if (zeromark >= 4) {
    cout << "FAIL - you got zero for " << zeromark << " questions";
  } else {
    if (total < 50.0) {
      cout << "FAIL - you got a total of " << total;
    } else {
      cout << "PASS - you got a total of " << total;
    }
  }
}

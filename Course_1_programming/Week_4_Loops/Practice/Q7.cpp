/*Each student in a class of unknown size has received a test mark out of 30.  Write a program that
reads in the test mark for each student, ending input with a -1 (trailing value).  Check that each mark is a
valid mark from 0 to 30.  The program must display the highest and lowest marks for the test.  The display
should look something like this when it runs:
Enter the mark for student 1: 27
Enter the mark for student 2: 11
etc…
Enter the mark for student n: -1
Highest mark: 29
Lowest mark: 5
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int student, i;
float mark, big, small;

int main () {
  cout << "Enter the class size: ";
    student = 1;
    mark = 0;
    big = 0;
    small = 31;
    while (mark >= 0) {
    cout << "Enter marks for student. Enter -1 to stop\n";
    cout << "Enter the mark for student " << student << ": ";
    cin >> mark;
    student ++;
    while (mark > 30) {
      cout << "ERRPR: mark must be between 0 and 30\n";
      cout << "Enter mark again for student " << student << ": ";
      cin >> mark;
      }
    if (mark > big && mark >=0) {
    big = mark;
    }
    if (mark < small && mark >=0) {
      small = mark;
    }
  }
  cout << "Highest mark: " << big << endl;
  cout << "Lowest mark: " << small << endl;
}

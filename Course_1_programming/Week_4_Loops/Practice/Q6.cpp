/*Each student in a class has received a test mark out of 30.  Write a program that first reads in the number
 of students in the class and then reads in the test mark for each student and calculates the average mark for
the test.  Check that each mark is a valid mark from 0 to 30.  The test marks are integers but the average
should be a real number displayed to one decimal place.  Your program should look something like this
when it runs:
Number of students in the class: 14
Enter the mark for student 1: 27
Enter the mark for student 2: 11
etc…
Average: 18.7
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int student, mark, i;
float average, sum;

int main () {
  cout << "Enter the number of students: ";
  cin >> i;
  sum = 0.0;
  for (student = 1; student <= i; student ++) {
    cout << "Enter the mark for student: " << student << endl;
    cin >> mark;
    while (mark > 30 || mark < 0) {
      cout << "ERROR: Mark must be between 0 and 30" << endl;
      cout << "Enter mark for the student "   << student << ": ";
      cin >> mark;
    }
    sum = mark + sum;
    average = sum / i;
  }
  cout << "Average: ";
  cout << setprecision(2) << fixed << average << endl;
}

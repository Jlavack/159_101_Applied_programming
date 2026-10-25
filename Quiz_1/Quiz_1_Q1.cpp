#include <iostream>
using namespace std;

int studentID, mark, input;

int main () {
  cout << "Enter the ID: ";
  cin >> studentID;
  cout << endl;

  if ((studentID >= 510000) && (studentID <= 999999)) {
    input = (studentID/10000) + 1900; //since using INT variables, this will remove any decimals.
  } else if  (studentID <= 509999) {
    input = (studentID/10000) + 2000;
  }
  if (input < 1980) {
  cout << "You must consult the archives\n";
  } else if (input >= 1980) {
  cout << "Enter the mark: ";
  cin >> mark;
  cout << endl;
    if (mark >= 50) {
      cout << "Student " << studentID << " passes with " << mark << "%" << endl;
    } else {
      cout << "Student " << studentID << " fails with " << mark << "%" << endl;
    }
  }
}

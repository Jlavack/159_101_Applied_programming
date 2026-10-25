#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

float m;

int main () {
  cout << "yout input is: \n";
  cin >> m;
  while (cin.fail()||(m-floor(m))) {
    cout << "Error. number has to be integer";
    cin.clear();
    cin.ignore(256, '\n');
    cin >> m;
  }
  int n = (int)m;
  return 0;
}

valid=false;

while (!valid) {
  valid =true;
  cout << "Enter the number of judges: " << endl;
  cin >> judges;
while(1) {
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Enter an integer only" << endl;
    cin >> judges;
  }
  if(!cin.fail())
  break;
}


valid = false; // initiate the loop to false
while (!valid) { //start validation loop
  valid =true; //assume input is valid
  for (judges = 1; judges <= i; judges ++) {
    cout << "Enter mark: ";
    cin >> mark;
while(true) { //if input is set to true run the validation on the input
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "ERROR. Enter an number only. "<< endl;
    cout << "Enter mark again\n";
    cin >> mark;
  }
  if(!cin.fail()) {
  break;
  }
} /*nest the loop for checking the bounds inside the validation loop. So that both validation and
limits ,can be tested in the same loop
*/
  while (mark < 0.0 || mark > 10.0) {
    cout << "ERROR. Enter mark again. Mark is between 0.0 and 10.0\n";
    cout << "Enter mark again\n";
    cin >> mark;
  }
  sum = mark + sum;
  average = sum / judges;
}
cout << "Final mark: ";
cout << setprecision(2) << fixed << average << endl;
}
}

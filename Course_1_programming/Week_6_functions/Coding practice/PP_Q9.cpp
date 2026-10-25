/*9. Write a function that has an integer passed to it and displays a line
containing that number of asterisks on one line.  For example, if main passes 4
to the function, the output will be:          *****/

#include <iostream>
using namespace std;

void asterix(int input);

main () {
  int input;

  cout << "Enter a number and get that many *: ";
  cin >> input;
  asterix(input);
}

void asterix(int input) {
  int i;
  for (i=0; i < input; i++) {
    cout << "*";
  }
  cout << endl;
}

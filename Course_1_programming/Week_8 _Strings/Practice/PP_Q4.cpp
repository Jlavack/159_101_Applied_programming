/*4. Write a function that has two letters of the alphabet passed to it and
returns the difference between their ascii codes, which main must display.
Test the program with several examples including 'A' and 'a'.
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void dif();
bool ischar(char c);

int main () {
  dif();
}

//functions
void dif() {
  char a, b;
  int dif;

  cout << "Enter two ascii characters and get the difference between then: ";
  cin >> a;
  while (ischar(a) == false) {
    cout << "Not a letter, try again: ";
    cin >> a;
  }

  cin >> b;
  while (ischar(b) == false) {
    cout << "Not a letter, try again: ";
    cin >> b;
  }

  dif = int(a) - int(b);
  if (dif < 0) {
    dif = dif *-1;
  } else {
    dif = dif;
  }

  cout << "The difference is: " << dif << endl;
}


bool ischar(char c) {
  if (( c < 'a' && c > 'Z') || (c < 'A') || (c > 'z')) {
    return false;
  } else {
    return true;
  }
}

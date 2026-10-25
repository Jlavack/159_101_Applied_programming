/*8. Write an efficient program to display the following.  The challenge is to think about how to reduce the
number of cout instructions by appropriate use of functions.  Set up several functions and use each
function several times (or as needed).  What is the minimum number of cout instructions that are needed?

on the first day of Christmas my true love gave to me
a partridge in a pear tree.

on the second day of Christmas my true love gave to me
two turtle doves,
and a partridge in a pear tree.

on the third day of Christmas my true love gave to me
three French hens,
two turtle doves,
and a partridge in a pear tree.

on the fourth day of Christmas my true love gave to me
four calling birds,
three French hens,
two turtle doves,
and a partridge in a pear tree.
*/

#include <iostream>
using namespace std;

void count(int i);
void lines(int i);
void lineone();
void linetwo();
void linethree();
void linefour();

int main () {
int i;

  for (i=1; i<=4; i++) {
    cout << "On the";
    count(i);
    cout << "day of Christmans my true love gave to me\n";
    lines(i);
  }
}

//functions
void count(int i) {
  if (i == 1) {
    cout << " first ";
  } else if (i ==2) {
    cout << " second ";
  } else if (i==3) {
    cout << " third ";
  } else if (i==4) {
    cout << " fourth ";
  }
}

void lines(int i) {
  if (i == 1) {
    lineone();
  } else if (i==2) {
    linetwo();
    lineone();
  } else if (i==3) {
    linethree();
    linetwo();
    lineone();
  } else if (i==4) {
    linefour();
    linethree();
    linetwo();
    lineone();
  }
}

void lineone() {
  cout << "a partridge in a pear tree" << endl << endl;
}

void linetwo() {
  cout << "two turtle doves, \nand ";
}

void linethree() {
  cout << "three French hens, \n";
}

void linefour() {
  cout << "four calling bird, \n";
}

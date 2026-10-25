/*1. If starting values in the array declared below are: 0   3   7   8   9      what are they after each of the following?
int a[10], i;
i)  for (i = 2; i < 5; i++) {			ii) for (i = 2; i < 4; i++) {
	a[i] = a[i-1];						         a[i] = a[i+1];
  }								                     }
	iii)  for (i = 4; i >= 1; i--) {			iv) for (i = 4; i > 0; i--) {
	a[i + 1] = a[i];			              			a[i-1] = a[i];
  }								                            }
*/

#include <iostream>
using namespace std;

int a[10];
int i;

int main () {
a[0] = 0;
a[1] = 3;
a[2] = 7;
a[3] = 8;
a[4] = 9;

  for (i=1; i < 5; i++) {
    a[i] = a[i-1];
  }

for (i=0; i < 10; i++) {
  cout << i << " equals " << a[i] << endl;
  }
}


/*
2. Which of 1(i) to (iv) is deleting an array value and at which position/index?
i sets up a deletion of all the values

3. Which of 1(i) to (iv) is setting the array up for an insertion, and at what position/index?
iv sets up an insertino of a[4] inot a[5]

*/

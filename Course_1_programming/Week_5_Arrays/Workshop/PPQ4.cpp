/*4. Write a program that stores the first 8 terms in the Fibonacci sequence
(starting with 1 and 1) in an array, and then displays the sequence.*/

#include <iostream>
using namespace std;

int i, n, n_minus1, n_minus2;
int fib[8];

int main () {
  n = 1;
  n_minus1=0;
  n_minus2=0;
  fib[0] = n;
  for (i=1; i <=8; i++) {
    n_minus1 = n;
    n = n_minus1 + n_minus2;
    fib[i] = n;
    n_minus2=n_minus1;
    n_minus1 = n;

  }
  for (i=0; i<=8; i++) {
    cout << fib[i] << " ,";
  }
}

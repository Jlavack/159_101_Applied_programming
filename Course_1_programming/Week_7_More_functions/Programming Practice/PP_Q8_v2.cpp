/*8**. The symbol z! means
in words:  z factorial
and numerically: z * (z-1) * (z-2) * (z-3) ……. * 2 * 1

Examples:
5! = 5 * 4 * 3 * 2 * 1 = 120
3! = 3 * 2 * 1 = 6
8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 40320

Write a program to calculate n combination r which is the number of different
groups containing r things that can be chosen from a set of n things.
Read in a value for n and then read in a value for r and calculate the combination using the formula:

n!	n combination r =
                  			    (n - r)! * r!

E.g. if n = 6 and r = 2 then n combination r = 6!/(4! * 2!) = 720/(24 * 2) = 15

Include a function to calculate a factorial, with prototype:    int factorial(int x);

Before calculating, always check that n and r are both greater than 0, that n is
greater than r and that n is not greater than 12.

Can we use this program to calculate the chance of winning Lotto, which is 40 combination 6?

Maybe not.  It depends whether your computer is 32 bit, 64 bit or better than this.
Factorials get very big, very quickly.  Computers have a maximum number that they
can store as an integer – more on this in 159.102.
*/

#include <iostream>
using namespace std;

int factorial(int x);
int number();
int groups();

int main () {
  int n, r;
  int result;

  cout << "Enter n: ";
  n = number();
  cout << "Enter r: ";
  r = groups();

while (r >= n) {
    cout << "ERROR: r must be less than n.\n";
    cout << "Enter r: ";
    r = groups();
    }

  result = factorial(n) / (factorial(n-r) * factorial(r));
  cout << "The answer is: " << result << endl;
}

//functions

int factorial(int x) {
  int i, result;
  result = 1;
  for(i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}


int number() {
  int n;
  cin >> n;
  while (n == 0) {
    cout << "Error: must be greater than 0, try again ";
    cin >> n;
  }
  return n;
}

int groups() {
  int r;
  cin >> r;
  while (r == 0) {
    cout << "Error: must be greater than 0, try again ";
    cin >> r;
  }
  return r;
}

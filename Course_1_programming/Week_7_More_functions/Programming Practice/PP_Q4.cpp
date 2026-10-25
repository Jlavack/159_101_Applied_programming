/*4. Write a function with 3 real numbers passed to it, that checks if the last
value lies between the first two, returning true if it does and false if it
doesn’t. For example, for arguments 4.6, 8.3 and 5.25, it should return true,
for 4.6, 8.3 and 10.0 it should return false and for 7.7, 3.5 and 4.9 it should
return true. (If the case of three identical numbers bothers you,
it should return true.)
Sample output:
5.25 lies between 4.60 and 8.30
10.00 does not lie between 4.60 and 8.30
4.90 lies between 7.70 and 3.50 */

#include <iostream>
using namespace std;

bool check(float a, float b, float c);

int main () {
  float a, b, c;
  bool test;

  cout << "Enter a three numbers. We will check is the last number is between the first two: " << endl;
  cin >> a >> b >> c;

  test = check(a, b, c);
  if (test == true) {
    cout << c << " does lie between " << a << " and " << b << endl;
  } else {
    cout << c << " does not lie between " << a << " and " << b << endl;
  }

}

bool check(float a, float b, float c) {
  if ((c >= a && c <= b) || (c >= b && c <= a)) {
    return true;
    } else {
    return false;
  }
}

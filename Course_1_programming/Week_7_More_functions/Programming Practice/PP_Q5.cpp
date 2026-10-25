/* 5. A prime number is an integer greater than one that is only divisible by
itself and 1.  Write a function is_prime, that returns true if the parameter
is a prime number and false if it is not.
*/

#include <iostream>
using namespace std;

bool is_prime(int input);

int main () {
  int input;
  bool test = true;

  cout << "Enter an number and find out if it is prime: " << endl;
  cin >> input;

  test = is_prime(input);

  if (test == true) {
    cout << input << " is a prime number" << endl;
  } else if (test == false) {
    cout << input << " is not a prime number" << endl;
  }
}

bool is_prime(int input) {
bool prime = true;
  int divisor;

  if (input == 0 || input == 1) {
    return false;
  }

    for (divisor = 2; divisor <= input/2; divisor ++) {
      if (input % divisor == 0) {
        prime = false;
        break;
       } else {
        prime = true;
    }
  }
  return prime;
}

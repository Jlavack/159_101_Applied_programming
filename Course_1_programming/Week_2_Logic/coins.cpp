#include <iostream>
using namespace std;

/* calculates minimum number of coins needed to pay an amount.
   The amount must be less than $1 and must be a multiple of 10. */

int cents, total;

int main() {
  cout << "Enter an amount in cents ";
  cin >> cents;
  if (cents >= 100) {
    cout << cents << " is greater than one dollar\n";
  } else if (cents % 10 != 0) {
    cout << cents << " is not a multiple of 10\n";
  } else {
    cout << cents << " cents = ";
    total = 0;
    if (cents >= 50) {
       cents = cents - 50;
       cout << "50c + ";
       total += 1;
    }
    if (cents >= 20) {
       cents = cents - 20;
       cout << "20c + ";
       total += 1;
    }
    if (cents >= 20) {
       cents = cents - 20;
       cout << "20c + ";
       total += 1;
    }
    if (cents >= 10) {
       cents = cents - 10;
       cout << "10c";
       total += 1;
    }
    cout << " You need " << total << " coins to pay.";
  }
}

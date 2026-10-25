#include <iostream>
using namespace std;

int guess;

int main() {
  cout << "Guess a number between 1 and 10 ";
  cin >> guess;
  if ((guess < 1) || (guess >10)) {
    cout << "Out of bounds \n";
  } else if ((guess >= 1) && (guess <= 4)) {
    cout << "Too low \n";
  } else if ((guess >= 6) && (guess <= 10)) {
    cout << "Too high \n";
  } else if (guess == 5) {
    cout << "Spot on!\n";
  } else {
    cout << "Fail";
  }
}

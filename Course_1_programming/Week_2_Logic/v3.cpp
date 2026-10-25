#include <iostream>
using namespace std;

int result;

int main() {
  cout << "Enter the final result ";
  cin >> result;
  if (result < 50) {
    cout << "Fail\n";
  }
  if ((result >= 67) && (result < 75)) {
    cout << "Upper second class pass\n";
  }
  if (result >= 75) {
    cout << "First class pass\n";
  }
  if ((result >= 60) && (result < 67)) {
    cout << "Lower second class pass\n";
  }
  if ((result >= 50) && (result < 60)) {
    cout << "Third class pass\n";
  }
}
// order doesn't matter because our conditions have bounds

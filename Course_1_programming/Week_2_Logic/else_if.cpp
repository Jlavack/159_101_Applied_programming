#include <iostream>
using namespace std;

int result;

int main() {
  cout << "Enter the final result ";
  cin >> result;
  if (result >= 75) {
    cout << "First class pass";
  } else if (result >= 67) {
    cout << "Upper second class pass";
  } else if (result >= 60) {
    cout << "Lower second class pass";
  } else if (result >= 50) {
    cout << "Third class pass";
  } else {
    cout << "Fail";
  }
}

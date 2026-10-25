#include <iostream>
using namespace std;

int result;

int main() {
  cout << "Enter the final result ";
  cin >> result;
  if (result >= 75) {
    cout << "First class pass";
  }
  if (result >= 67) {
    cout << "Upper second class pass";
  }
  if (result >= 60) {
    cout << "Lower second class pass";
  }
  if (result >= 50) {
    cout << "Third class pass";
  } else {
    cout << "Fail";
  }
}
//will not work. It will return all results for 75 and higher

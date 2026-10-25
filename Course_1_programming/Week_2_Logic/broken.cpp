#include <iostream>
using namespace std;

int result;

int main() {
  cout << "Enter the final result ";
  cin >> result;
  if (result <= 50) {
    cout << "fail\n";
  } else if (result >= 60) {
    cout << "Upper second class pass\n";
  } else if (result >= 67) {
    cout << "Lower second class pass\n";
  } else if (result >= 75) {
    cout << "First class pass\n";
  } else {
    cout << "Fail\n";
  }
}
//order is important because it checks the conditions from the top, taking the first one which is passed//

#include <iostream>
using namespace std;

bool header;
int num1, num2;

int main() {
  cout << "Enter the first number ";
  cin >> num1;
  cout << "Enter the second number ";
  cin >> num2;
  header = false;
  if (num1 < 10) {
    if (header == false) {
      cout << "List of numbers less than 10\n";
      header = true;
    }
    cout << num1 << endl;
  }
  if (num2 < 10) {
    if (header == false) {
      cout << "List of numbers less than 10\n";
      header = true;
    }
    cout << num2 << endl;
  }
  if (header == false) {
    cout << "There are no numbers less than 10\n";
  }
}

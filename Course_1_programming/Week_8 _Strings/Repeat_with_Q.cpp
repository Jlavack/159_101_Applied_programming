#include <iostream>
using namespace std;

int a, b, result;
char choice;

int main() {
  choice = 'X';    // any character that is not Q
  while ((choice != 'Q') && (choice != 'q')) {
    cout << "Enter two numbers ";
    cin >> a >> b;
    result = a + b;
    cout << "The result is " << result << endl;
    cout << "Enter Q to quit - any other key to continue: ";
    cin >> choice;
  }
}

#include <iostream>
#include <string>
using namespace std;

string input;
int num, i;

int main() {
  cout << "Enter a street address, e.g. 36 Ocean View Road\n";
  getline(cin, input);
  i = 0;
  num = 0;
  while (input[i] >= 48 && input[i] <= 57) { // stops when a letter is entered
    num = num * 10 + input[i] - 48;
    i++;
  }
  cout << num << endl;

  if (num > 500) {
    cout << "This address is greater than 500\n";
  } else {
    cout << "This address is less than or equal to 500\n";
  }
}

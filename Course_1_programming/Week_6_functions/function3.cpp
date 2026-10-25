#include <iostream>
using namespace std;

void prompt(int mini, int maxi);       /* function prototype */

int a, b;

int main() {
  prompt(12, 33);                    /* function call */
  cin >> a;
  prompt(85, 99);                    /* function call */
  cin >> b;
  cout << "You entered " << a << " and " << b;
}

void prompt(int mini, int maxi) {      /* function definition */
  cout << "Please type in a number\n";
  cout << "The number must be from " << mini;
  cout << " to " << maxi << endl;
  cout << "Press Enter after typing the number\n";
}

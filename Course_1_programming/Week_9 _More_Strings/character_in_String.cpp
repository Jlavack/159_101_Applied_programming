#include <iostream>
using namespace std;

string town[55];   // the maximum number of towns is 55
int total, i;

int main() {
  total = 3;    // we are looking only at 3 towns
  town[0] = "Auckland";
  town[1] = "Wellington";
  town[2] = "Christchurch";
  cout << "The first letters of the towns are:\n";
  for (i = 0; i < total; i++) {
    cout << "The first letter of " << town[i];
    cout << " is " << town[i][0] << endl;
  }
}

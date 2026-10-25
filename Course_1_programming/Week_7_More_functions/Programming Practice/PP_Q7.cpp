/*7. Write a program that calls two functions named load and round,
to set up two corresponding arrays of 7 positive integers each. The functions
must do the following:
load reads in one value, checking that it is between 0 and 500 before assigning
it to the first array round rounds a value from the first array and assigns the rounded value to the
second array. The program should then display the two arrays in this way:
33 is rounded down to 30
15 is rounded up to 20
100 is unchanged by rounding     etc
(Remember rounding involves adding 5, dividing by 10 and multiplying by 10.)*/

#include <iostream>
using namespace std;

void load(int i);
void round(int i);

int a[100], b[100];

int main () {
  int size, i;

  cout << "Enter some numbers: " << endl;
  size = 7;

  for (i = 0; i < size; i ++) {
    load(i);
    round(i);
  }

  for (i = 0; i < size; i ++) {
    if (a[i] < b[i]) {
      cout << a[i] << " is rounded up to " << b[i] << endl;
    }
    if (a[i] > b[i]) {
      cout << a[i] << " is rounded down to " << b[i] << endl;
    }
    if (a[i] == b[i]) {
      cout << " is not rounded." << endl;
    }
  }
}


void load(int i) {
  int temp;
  cout << "Enter number " << i << "; ";
  cin >> temp;
  while ((temp <= 0 || temp >= 500)) {
    cout << "ERROR: must be between 0 and 500\n";
    cout << "Enter number again " << i << ": ";
    cin >> temp;
  }
  a[i] = temp;
}

void round(int i) {
  int result;

  result = ((a[i] + 5) / 10);
  b[i] = result * 10;
}

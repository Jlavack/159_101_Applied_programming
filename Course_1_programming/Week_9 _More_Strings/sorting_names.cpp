#include <iostream>
#include <string>
using namespace std;

int getnames();
void sortnames(int total);

// a MAXIMUM of 150 names - you can change this if you like
// must be in same case for first letter
string name[150];

int main() {
  int i, total;
  total = getnames();
  sortnames(total);
  cout << "\nHere is the list in alphabetical order\n";
  for (i = 0; i < total; i++) {
    cout << name[i] << endl;
  }
}

int getnames() {
  int i;
  i = 0;
  cout << "Enter names - type ??? to stop\n";
  getline(cin, name[i]);
  while (name[i] != "???") {
    i++;
    getline(cin, name[i]);
  }
  return i;
}

void sortnames(int total) {
  int pass, i;
  string temp;
  for (pass = 0; pass < total; pass++) {
    for (i = 0; i < total - 1; i++) {
      if (name[i] > name[i+1]) {
        temp = name[i];
        name[i] = name[i+1];
        name[i+1] = temp;
      }
    }
  }
}

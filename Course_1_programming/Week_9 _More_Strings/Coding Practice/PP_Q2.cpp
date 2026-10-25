/*2. Write a program that asks the user for three words and prints out the words
in alphabetical order, then the words concatenated in alphabetical order (stored in a fourth string). */

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


int getwords ();
void sortwords (int total);

string words[100];

int main() {
int total, i;
string final, temp;

total = getwords();
sortwords(total);

cout << "Alphabetised list: ";
  for (i=0; i <= total; i++) {
    cout << words[i] << endl;
  }

  cout << "Final: " << endl;
  for (i=total; i >= 0; i--) {
    if (words[i] != "???") {
    temp = words[i];
    final = temp + final;
    }
  }
  cout << final << endl;
}

//functions
int getwords() {
  int i;
  i = 0;
  cout << "Enter words - type ??? to stop\n";
  getline(cin, words[i]);
  while (words[i] != "???") {
    i++;
    getline(cin, words[i]);
  }
  return i;
}

void sortwords(int total) {
  int pass, i;
  string temp;
  for (pass = 0; pass < total; pass++) {
    for (i = 0; i < total-1; i++) {
      if(words[i] > words[i+1]) {
        temp = words[i];
        words[i] = words[i+1];
        words[i+1] = temp;
      }
    }
  }
}

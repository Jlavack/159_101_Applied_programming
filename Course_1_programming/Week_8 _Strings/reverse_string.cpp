#include <iostream>
#include <string>
using namespace std;

int i, total;
string sentence, reverse;

int main() {
  cout << "Type in a sentence ";
  getline(cin, sentence);
  total = sentence.length();
  reverse = "";
  for (i = total - 1; i >= 0; i--) {   // note the i--, total - 1 ensure there is no leading space
    reverse = reverse + sentence[i];
  }
  cout << "The sentence is " << sentence << endl;
  cout << "The reverse is  " << reverse << endl;
}

#include <iostream>
using namespace std;

char letter;

int main() {
  cout << "Press a key followed by Enter ";
  cin >> letter;
  if ((letter >= 'a') && (letter <= 'z')) {
    letter = letter - 32;
    cout << "The upper case letter is " << letter << endl;
  } else {
    cout << "ERROR input out of bounds" << endl;
  }
}

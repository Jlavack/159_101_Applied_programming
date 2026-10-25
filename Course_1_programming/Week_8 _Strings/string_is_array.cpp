#include <iostream>
#include <string>
using namespace std;

string text;

int main() {
  text = "We are going to sleep";
  cout << text << endl;
  text[17] = 'w';
  cout << text << endl;
}

//changes the 17th letter to w.

#include <iostream>
#include <string>
using namespace std;

string msg;

int main() {
  cout << "Enter your text message: ";
  getline(cin, msg);
  cout << msg << endl;
}

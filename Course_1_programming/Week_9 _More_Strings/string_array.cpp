#include <iostream>
#include <string>
using namespace std;

string str[4];
int i;

int main() {
  cout << "Enter the first name ";
  getline(cin, str[0]);
  cout << "Enter the second name ";
  getline(cin, str[1]);
  cout << "Enter the third name ";
  getline(cin, str[2]);
  cout << "Enter the fourth name ";
  getline(cin, str[3]);
  for (i = 0; i < 4; i++) {
    cout << "Name [" << i << "] is " << str[i] << endl;
  }
}

#include <iostream>
#include <string>
using namespace std;

string msg;
int len, cap;

int main() {
  msg = "Hello";
  cout << msg << endl;
  len = msg.length();
  cout << "len = " << len << endl;
  cap = msg.capacity();
  cout << "capacity = " << cap << endl;

  msg = "My name is Bilbo Baggins";
  cout << msg << endl;
  len = msg.length();
  cout << "len = " << len << endl;
  cap = msg.capacity();
  cout << "capacity = " << cap << endl;
}

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string name;
int age;

int main() {
  cout << "Enter your age: ";
  cin >> age;
  getchar();  // this reads the enter and flushes the buffer
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Your name is " << name << " and your age is " << age;
}

//If you neglect to flush the buffer, the reuslt is the getline() function reads in 'enter' as your name,

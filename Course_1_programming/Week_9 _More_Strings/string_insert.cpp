#include <iostream>
#include <string>
using namespace std;

string insert(string str1, string str2);

int main() {
  string firstlast, middle, full;
  cout << "Enter first name and last name separated by a space: ";
  getline(cin, firstlast);
  cout << "Enter a middle name: ";
  cin >> middle;
  full = insert(firstlast, middle);
  cout << "The final name is: " << full << endl;
}

string insert(string str1, string str2) {
// insert str2 into str1 where there is a blank character
  string temp;
  int total, i;
  temp = "";
  cout << "DEBUG: "<< temp << endl;
  total = str1.length();
  i = 0;
  while (str1[i] != ' ') {
    temp = temp + str1[i];
    i++;
    cout << "DEBUG: "<< temp << endl;
  }
    cout << "DEBUG: "<< temp << endl;
  temp = temp + " " + str2; //inserts middle name
  while (i < total) {
    temp = temp + str1[i]; //adding the last name back
    i++;
    cout << "DEBUG: "<< temp << endl;
  }
  return temp;
}

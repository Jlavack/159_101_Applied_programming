#include <iostream>
#include <string>
using namespace std;

int stringtoint(string str, int total);

float value, total;
int i;
string temp;
bool isnumber;

int main() {
  cout << "Enter an integer value ";
  cin >> temp;
  isnumber = true;
  total = temp.length();
  for (i = 0; i < total; i++) {
    if ((temp[i] > '0') || (temp[i] < '9') || (temp[i] == '.')) {
      isnumber = true;
    } else {
      isnumber = false;
    }
  }
  if (isnumber) {
    value = stringtoint(temp, total);
    cout << "The integer value is " << value << endl;
  } else {
    cout << temp << " is not an integer value!\n";
  }
}

int stringtoint(string str, int total) {
// function to convert a string to an integer
  float num;
  int i;
  num = 0.0;
  for (i = 0; i < total; i++) {
    num = num * 10.0 + str[i] - 48.0;
  }
  return num;
}

#include <iostream>
using namespace std;

int value1, value2;

int main() {
  value1 = 37;
  cout << "The value is ";
  cout.fill('0');          // fill extra places with zeros
  cout.width(4);           // width of the display will be 4
  cout << right << value1 << endl;
  value2 = 1005;
  cout << "The value is " << value2 << endl;
}

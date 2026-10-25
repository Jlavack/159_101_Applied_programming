#include <iostream>
#include <cstdlib>
using namespace std;

float length1, length2, width1, width2, area1, area2;
bool display, bigger1;

int main() {
  cout << "Enter the length and width of Rectangle 1: ";
  cin >> length1 >> width1;
  if ((length1 < 0) || (width1 < 0)) {
    cout << "ERROR: invalid input and program will close\n";
    exit(12);
  }
  cout << "Enter the length and width of Rectangle 2: ";
  cin >> length2 >> width2;
  if ((length2 < 0) || (width2 < 0)) {
    cout << "ERROR: invalid input and program will close\n";
    exit(18);
  }
  display = false;
  if ((length1 == length2) && (width1 == width2)) {
    cout << "The two rectangles are identical.\n";
    display = true;
  } else {
    area1 = length1 * width1;
    area2 = length2 * width2;
    if (area1 == area2) {
      cout << "Area of Rectangle 1 = Area of Rectangle 2\n";
      display = true;
    } else if (area1 > area2){
      bigger1 = true;
    } else {
      bigger1 = false;
    }
  }
  if (display == false) {
    if (bigger1 == true) {
      cout << "Area of Rectangle 1 > Area of Rectangle 2\n";
    } else {
      cout << "Area of Rectangle 2 > Area of Rectangle 1\n";
    }
  }
}

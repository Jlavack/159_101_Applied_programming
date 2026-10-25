#include <iostream>
using namespace std;

int length, width, area, height, volume;

int main() {
  cout << "Let's calculate the area of a rhomboid" << endl;
  cout << "Enter the width first" << endl;
  cout << "Width ";
  cin >> width;
  cout << "Enter the length now and press enter " << endl;
  cout << "Length ";
  cin >> length;
  area = width * length;
  cout << "The area of this rhomboid is " << area << endl;
  cout << "\n Want to find the volume? Give it a height" << endl;
  cout << "Height ";
  cin >> height;
  volume = width * length * height;
  cout << "And the volume is... \n" << volume;
}

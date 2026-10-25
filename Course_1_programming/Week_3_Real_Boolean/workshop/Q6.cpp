#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

bool country;
float temp;

int main () {
  cout << "Enter 1 for NZ and 0 for America\n";
  cin >> country;
  if (country == true) {
    cout << "Enter a temperature in celcius\n";
    cin >> temp;
    temp = (temp * 1.8) + 32;
    cout << "The temerpature in Farenheight is " << setprecision(2) << fixed << temp << endl;
  } else if (country == false) {
    cout << "Enter a temperature in farenheight\n";
    cin >> temp;
    temp = (temp - 32) /1.8;
    cout << "The temperature in celcius is " << setprecision(2) << fixed << temp << endl;
  }
}

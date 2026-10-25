#include <iostream>
#include <iomanip>
using namespace std;

float metres, inches;
int yards, feet;

int main() {
  cout << "This program converts metres into the imperial system\n";
  cout << "Enter a length in metres: ";
  cin >> metres;
  inches = metres * 39.3701;
  feet = inches / 12;         // real division loaded into an int
  yards = feet / 3;
  feet = feet % 3;
  inches = inches - yards * 36 - feet * 12;
  cout << setprecision(3) << fixed;
  cout << metres << " metres = ";
  cout << yards << " yards " << feet << " feet ";
  cout << setprecision(1) << fixed;
  cout << inches << " inches " << endl;
}

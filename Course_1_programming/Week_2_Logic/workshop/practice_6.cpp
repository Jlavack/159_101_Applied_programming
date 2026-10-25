//6. Write a program that displays 3 different numbers in numerical order.
//Sample output:   The three numbers in order are 6, 25, 91.
//Test all possible starting orders of the three numbers.

#include <iostream>
using namespace std;

int a, b, c, first, second, third;

int main () {
  cin >> a;
  cin >> b;
  cin >> c;
  first = a;
  second = b;
  third = c;
  if ((first == second) || (second == third)) {
    cout << "numbers not different\n";
  } else if ((first < second) && (second < third)) {
      cout << "the order is " << first << ", " << second << ", " << third << endl;
    } else if ((first > second) && (first > third)) {
      third = a;
      first = b;
      second = c;
      if ((first > second)) {
        second = b;
        first = c;
      }
        cout << "the order is " << first << ", " << second << ", " << third << endl;
      } else if ((first > second) && (first < third)) {
        first = b;
        second = a;
        third = c;
        cout << "the order is " << first << ", " << second << ", " << third << endl;
      }
    }

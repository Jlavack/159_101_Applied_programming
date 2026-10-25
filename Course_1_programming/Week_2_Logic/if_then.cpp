#include <iostream>
using namespace std;

int value;

int main() {
  cout << "Can you guess the number I'm thinking of? It's between 0 and 10 ";
  cin >> value;
  /* If will carry out instructions in {} if condition is passed. ELSE is whatever is outside the {} */
  if (value == 10) {
    cout << "You guessed right!" << endl;
  }  else {
  if (value <= 1) {
    cout << "Cold, very cold" << endl;
    cout << "Try again ";
    cin >> value;
  } else {
  if (value <=4) {
    cout << "Cold" << endl;
    cout << "Try again ";
    cin >> value;
  } else {
  if (value <=5) {
    cout << "Warm " << endl;
    cout << "Try again ";
    cin >> value;
  } else {
  if (value <=8) {
    cout << "Hot " << endl;
    cout << "Try again ";
    cin >> value;
  } else {
  if (value <=9) {
    cout << "Very Hot! " << endl;
    cout << "Try again ";
    cin >> value;
  } } } } } }
}

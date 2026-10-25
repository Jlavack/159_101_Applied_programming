/*
1. Write a function called square, that has a real number argument. The function
should return the square of the number, for example, if the function is called
with 5.0 then main should display:
The square of the number is 25.0     */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

float square(float input);

int main () {
  float input, result;
  char stop;

  stop = stop;
  cout << "Enter a number and we will square it, 'stop' to exit: ";
  cin >> input;
  while (input != stop) {
    result = square(input);
    cout << "Answer: " << result << endl << endl;
    cout << "Enter another number: ";
    cin >> input;
  }
}

float square(float input) {
  float answer;
  answer = input * input;
  return answer;
}

/*6. Write a program that reads in lengths for the two shorter sides, x and y,
of a right-angled triangle, then calls a function called hypotenuse that
calculates and returns the length of the third side, h,  according to Pythagoras’
formula:
	        ______
	h = √ x2 + y2
Your program should include the square function from Q1, with hypotenuse calling square.*/

#include <iostream>
#include <cmath>
using namespace std;

float hypotenuse(float a, float b);
float square(float input);

int main() {
  float a, b;

  cout << "Enter the two shorter sides of a triange, we'll tell you the hypotenuse: " << endl;
  cin >> a >> b;

  cout << hypotenuse(a, b) << endl;
}

float hypotenuse(float a, float b) {
  float input, hypotenuse;

  input = square(a) + square(b);
  hypotenuse = (sqrt(input));
  return hypotenuse;
}

float square(float input) {
  float answer;
  answer = input * input;
  return answer;
}

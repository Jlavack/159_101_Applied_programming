#include <iostream>
using namespace std;

float addthree(float a, int b, int c);

int x;
float y;

int main() {
  x = 3;
  y = addthree(2.0, x, x * 6 % 7);
  cout << "The result is " << y;
}

float addthree(float a, int b, int c) {
  float result;
  result = a + b + c;
  return result;
}

//return tells the function to put the result output into the y variable.
//Y is a variable that is calling the addthree{} function and storing the results

//void functions do not do this. They are called in the body of main{}, notepassed into a variable.

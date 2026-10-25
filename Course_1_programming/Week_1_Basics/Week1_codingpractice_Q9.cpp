#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

double value, gst;
float result;

int main () {
  cout << "Enter a GST exclusive value below in cents, and get the GST inclusive amount:" << endl;
  cout << "c";
  cin >> value;
  gst = value * 0.15;
  result = (value + gst)/100;
  cout << "The GST inclusive price is /n $" << fixed << setprecision(2) << result; //fixed, fixes the integer portion of the result
}

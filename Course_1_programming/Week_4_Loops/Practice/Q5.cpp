/*
5. Write a program that uses a for loop to display a conversion table for temperatures.
The formula is Fahrenheit = Celsius * 1.8 + 32.  Your program should display a
table that looks like this:
Conversion from degrees Celsius to Fahrenheit
Celsius        Fahrenheit
   0              32.0
   5              41.0
  10              50.0
You can decide how far your table will go.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

float Farenheit, Celcius;

int main () {
  cout << "Celcius     Farenheit\n";
  for (Celcius = 0; Celcius <= 100; Celcius += 5) {
    Farenheit = (Celcius *1.8) + 32;
    cout.width(4);
    cout << right << Celcius;
    cout.width(14);
    cout << setprecision(2) << fixed << Farenheit << endl;
  }
}

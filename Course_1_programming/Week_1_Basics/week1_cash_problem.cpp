#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

double price, cash, precision;

int main () {
  cout << "Enter a price and we will round it to the nearest 0.5";
  cin >> price;
  precision = 0.5;
  cash = round(price/precision)*precision; /*divide by precision and multiple by precision */
  cout << " The price is " << price;
  cout << " and you must pay $" << setprecision(2) <<cash;
}

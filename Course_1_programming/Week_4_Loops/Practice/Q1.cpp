//1. Write a program to print your name 10 times, using a while loop, then using a for loop.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int count;

int main () {
  count = 0;
  while (count <=10) {
    cout << "John\n";
    count ++;
  }
  for(count=0; count <=10; count++) {
    cout << "John\n";
  }
}

/*Write a program that reads five 8-digit codes of the different brands of a
supermarket product into one array and the real number prices of the products
into a corresponding array.  There will be no spaces in the codes and no leading
zeroes.  The program should check that the codes are exactly 8 digits long and
should display the code of the cheapest brand. */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

int code, size, i, pass, codemin;
float price, cheapest, mini, temp;
int codes[100];
float prices[100];

int main () {
  // enter item codes
  size = 2;
  for (i=0; i < size; i++) {
    cout << "Enter an 8 digit item code: ";
    cin >> code;
        while (code < 9999999 || code > 100000000) {
        cout << "ERROR: not a valid item code. An item code has 8 digits\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a valid item code: ";
        cin >> code;
      }
    codes[i] = code;

    cout << "Enter the price: $";
    cin >> price;
    prices[i] = price;
    cout << endl;
  }

  mini = prices[0];
  for (i = 0; i < size; i++) {
    if (prices[i] < mini) {
      mini = prices[i];
      codemin = codes[i];
    }
  }

  //sort by price
  for (pass=0; pass < size; pass++) {
    for(i=0; i < size; i++) {
      if (prices[i] < prices[i+1]) {
        temp = prices[i];
        prices[i] = prices[i+1];
        prices[i+1] = temp;
        temp = codes[i];
        codes[i] = codes [i+1];
        codes[i+1] = temp;
      }
    }
  }

cout << "The order is: \n";
  for (i=0; i < size; i++) {
    cout << codes[i];
    cout << setprecision(2) << fixed << " priced at: $" << prices[i] << endl;
  }

  cout << "The cheapest is: " << codemin;
  cout << setprecision(2) << fixed << " at price $" << mini << endl;

}

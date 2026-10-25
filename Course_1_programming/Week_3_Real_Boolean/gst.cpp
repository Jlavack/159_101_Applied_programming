#include <iostream>
#include <iomanip>
using namespace std;

float price, gst, total, rate;

int main () {
  cout << "enter the price of an item $";
  cin >> price;
  rate = 15.0/100.0;
  gst = price * rate;
  total = price + gst;
  cout << setprecision(2) << fixed;
  cout << "the GST on this item is $";
  cout.width(6);
  cout << gst << right << endl;
  cout << "the total to pay is $";
  cout.width(6);
  cout.fill('#');
  cout << total << right<< endl;
}

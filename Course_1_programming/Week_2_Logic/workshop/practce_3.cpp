//3. A bus company has the following charges for a tour.  If a person buys less
//than 5 tickets they cost $100 each, otherwise they cost $75 each.  Write a
//program that reads in the number of tickets that a customer has bought and
//then calculates the total cost

#include <iostream>
using namespace std;

int tickets, price, cost, saved;

int main () {
  string text;
  cout << "How many tickets do you want? \n";
  cin >> tickets;

  if (tickets <= 5) {
    price = 100;
  } else if (tickets >= 5) {
    price = 75;
  } else if (saved == 0) {
    text = "you have saved nothing, whamp whamp";
  }
  cost = price * tickets;
  saved = (100 * tickets) - cost;
cout << "Your bill is " << cost << endl;
cout << "you have saved " << saved << endl;
}

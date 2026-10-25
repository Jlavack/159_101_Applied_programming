/*4.  A shop uses a class to store data about items for sale in the shop.  This data includes:
	name of item (for example: “bread”)
            price of item (for example: $3.19)
            number of items in stock (for example: 120)
Design the class and write suitable methods to load the data and display the data.
 There are many items in the shop so you will need an array of objects.  Write a
  function (not a method) that enters the name of an item and how many items have
   just been sold.  Write suitable methods for the function to use in order to update
    the number of items.  For example:
Enter item that was just sold: bread
How many items were sold: 2
Number of bread items in the shop is now 118
Write a main program to test your class.
*/

#include <iostream>
using namespace std;

class shopitem_class {
private:
  string name;
  float price;
  int num;
public:
  void loaddata(string n, float p, int x);
  string getname() { return name; }
  float getprice() { return price; }
  void update(int x) { num = num - x; }
  void display();
};

void sell(int tot);
int findlowest(int total);

shopitem_class myitem[100];

int main() {
  int total, supply, i;
  float price;
  string str;
  i=0;

cout << "Enter an item name: ";
getline(cin, str);
while(str != "??") {
  cout << "Enter its cost: ";
  cin >> price;
  cout << "Enter the supply: ";
  cin >> supply;
  myitem[i].loaddata(str, price, supply);
  getchar();
  i++;
  total++;
  cout << "Enter an item name: ";
  getline(cin, str);
}

sell(total);

cout << "Item with lowest price is: ";
int j;
j = findlowest(total);
myitem[j].display();

//for (i=0; i<total; i++) {
//  myitem[i].display();
//}

}

void sell(int total) {
  string str, search;
  int sold, i;
  cout << "Enter the name of the item just sold: ";
  getline(cin, search);
  cout << "How many were sold: ";
  cin >> sold;
  for (i=0; i < total; i++) {
    str = myitem[i].getname();
    if (str == search) {
    myitem[i].update(sold);
    }
  }
}

int findlowest(int total) {
  int i, low, lowprice, currentprice;
  lowprice = myitem[0].getprice();
  low = 0;
  for(i=0; i<total; i++) {
    currentprice = myitem[i].getprice();
    if (currentprice < lowprice) {
      lowprice = currentprice;
      low = i;
    }
  }
  return low;
}

//-------------------------methods---------------------------
void shopitem_class::loaddata(string n, float p, int x) {
  name = n;
  price = p;
  num = x;
}

void shopitem_class::display() {
  cout << "Item name is: " << name << endl;
  cout << "Item price is: " << price << endl;
  cout << "Stock level is: " << num << endl;
}

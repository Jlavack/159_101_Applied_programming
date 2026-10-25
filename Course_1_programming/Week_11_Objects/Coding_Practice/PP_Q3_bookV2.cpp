/*2.  3.  Use the book class in (2) above to set up an array of book objects.
Use the methods you designed in (2) above to read and display the data for several books.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class book_class {
private:
  string title, author;
  int year;
  bool checked_in;
public:
  void loadbook(string t, string a, int y, bool c);
  void display();
  void checked_in_library();
};

book_class mybook;

int main () {
int num;
string str1, str2;
cout << "Enter the book title: " << endl;
getline(cin, str1);
cout << "Enter the author of the book: :" << endl;
getline(cin, str2);
cout << "Enter the year of publishing: " << endl;
cin >> num;
mybook.loadbook (str1, str1, num, true);
mybook.checked_in_library();
mybook.display();
}

//-----------------Methods for book_class--------------------------------
void book_class::loadbook(string t, string a, int y, bool c) {
  title = t;
  author = a;
  year = y;
  checked_in = c;
}

void book_class::display () {
  cout << "Title is: " << title << endl;
  cout << "Author is: " << author << endl;
  cout << "Year of publication is " << year << endl;
  if (checked_in) {
    cout << "This book is checked in." << endl;
  } else {
    cout << "This book is checked out." << endl;
  }
}


void book_class::checked_in_library() {
  char check;
  cout << "Is this book checked in? (Y/N) " << endl;
  cin >> check;
  if ((check == 'Y') || (check == 'y')) {
    checked_in = true;
  } else {
    checked_in = false;
  }
}

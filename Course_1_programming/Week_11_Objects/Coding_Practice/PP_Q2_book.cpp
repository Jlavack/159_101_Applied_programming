/*2.  The library requires a class to store information about a book.  Set up a
class to hold data including title, author, year of publication, and a boolean
variable to indicate if the book is in the library or if the book has been taken
out.  Create a method to load the data for one book.  Create another method to
display the data for a book.  Create another method to check if a book is in the
library or not.  Write a main program to test your methods.
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
  string getauthor() {return author;}
  string gettitle() {return title;}
  int getyear() {return year;}
  bool getstatus() {return checked_in;}
  void display();
  void checked_in_library();
};

book_class mybook[20];

int main () {
int num, i, n;
string str1, str2;

cout << "How many books are there? " << endl;
cin >> n;
getchar();

for (i=0; i<n; i++) {
  cout << "Enter the title of the book: :" << endl;
  getline(cin, str1);
  cout << "Enter the author of the book: :" << endl;
  getline(cin, str2);
  cout << "Enter the year of publishing: " << endl;
  cin >> num;
  mybook[i].loadbook (str1, str2, num, true);
  mybook[i].checked_in_library();
  getchar();
}

cout << "DEBUG: " << n << endl;
for (i=0; i<n; i++) {
  mybook[i].display();
  cout << endl;
  }
}

//-----------------Methods for book_class--------------------------------
void book_class::loadbook(string t, string a, int y, bool c) {
  author = a;
  title = t;
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

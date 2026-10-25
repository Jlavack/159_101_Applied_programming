#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void breakstring(string s);

int count;
fstream bookfile;          // define a file object
string filename, searchname, line, title, author, yearstring;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;
  getchar();  // clear the input buffer before reading the author

  // 2. Open the file for reading (input)
  bookfile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (bookfile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {
    // 3. Enter the name of the author you want
    cout << "Enter the name of the author: ";
    getline (cin, searchname);   // names can have spaces
    cout << "Here is the list of books written by ";
    cout << searchname << endl;

    // 4. Access the file - read all the lines from the file
    count = 0;
    while (getline(bookfile, line)) {
      cout << line << endl;  // DEBUG cout to display all lines
      breakstring(line);
      // convert yearstring to a number
      if (author == searchname) {
        cout << yearstring << " " << title << endl;
        count++;
      }
    }
    cout << searchname << " wrote " << count << " books.\n";

    // 5. Close the file
    bookfile.close();
  }
}

void breakstring(string s) {
  // break the string s into smaller strings using the separator
  int total, i;

  i = 0;
  title = "";
  while (s[i] != ';') {
    title = title + s[i];
    i++;
  }
  i++;  // jump over the semi-colon
  author = "";
  while (s[i] != ';') {
    author = author + s[i];
    i++;
  }
  i++;  // jump over the semi-colon
  yearstring = "";
  total = s.length();
  while (i < total) {
    yearstring = yearstring + s[i];
    i++;
  }
}

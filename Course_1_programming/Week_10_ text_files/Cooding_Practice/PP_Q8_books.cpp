#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void breakstring(string s);
int converttoint(string str);

int count, year, date1, date2;
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
    //3. Enter the name of the author you want
    cout << "Enter the two dates to search between, first the earliest, then the latest: ";
    cin >> date1 >> date2;   // names can have spaces
    cout << "Here is the list of books written in that period: ";

    // 4. Access the file - read all the lines from the file
    count = 0;
    while (getline(bookfile, line)) {
      //cout << line << endl;  // DEBUG cout to display all lines
      breakstring(line);
      year = converttoint(yearstring);
      // convert yearstring to a number
      if (year >= date1 && year <= date2) {
        cout << author << " " << title << endl;
        count++;
      }
    }
    cout << "There are " << count << " books written between 1900 and 1999.\n";

    // 5. Close the file
    bookfile.close();
  }
}

void breakstring(string s) {
  // break the string s into smaller strings using the separator
  int total, i;

  i = 0;
  author = "";
  while (s[i] != ';') {
    author = author + s[i];
    i++;
  }
  i++;  // jump over the semi-colon
  title = "";
  while (s[i] != ';') {
    title = title + s[i];
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

int converttoint(string str) {
// convert a string to an integer value
  int i, total, result;
  result = 0;
  total = str.length();
  for (i = 0; i < total; i++) {
    result = result * 10 + str[i] - 48;
  }
  return result;
}

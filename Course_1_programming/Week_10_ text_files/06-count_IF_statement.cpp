//C:\Users\johnl\OneDrive\Documents\readingifstatements.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ifcount;
fstream programfile;          // define a file object
string filename, str, line;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the program: ";
  cin >> filename;

  // 2. Open the file for reading (input)
  programfile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (programfile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

    // 3. Access the file - read one word at a time from the file
    ifcount = 0;
    int lines = 0;
    while(getline(programfile, line)) {
      lines++;
      while (programfile >> str) {
        if (str == "if") {
          ifcount++;
          cout << "Line number is: " << lines +1 << endl;
        }
      }
    }
    cout << "There are " << ifcount << " if statements.\n";

    // 4. Close the file
    programfile.close();
  }
}

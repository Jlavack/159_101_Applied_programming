#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream datafile;          // define a file object
string filename, text;

int main() {
  // 1. Load the full name of the file into a string
  cout << "Enter a file name with extension" << endl;
  getline(cin, filename);

  // 2. Open the file for writing (output)
  datafile.open(filename.c_str(), fstream::out);

  // 3. Access the file - in this case, write to the file
  cout << "Enter a line of text, type ?? to stop." << endl;
  getline(cin, text);
  while (text != "??") {
    datafile << text << endl;
    cout << "Enter another line, end with ??" << endl;
    getline(cin, text);
  }

  // 4. Close the file
  datafile.close();
}

//C:\Users\johnl\OneDrive\Documents\159101 Applied programming\Code\Classes\Week 10 - text files

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int number;
fstream inputfile;          // define a file object
string filename, line;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;

  // 2. Open the file for reading (input)
  inputfile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (inputfile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

    // 3. Access the file - read all the lines from the file
    cout << "Displaying all the lines from " << filename << endl;
    number = 0;
    while (getline(inputfile, line)) {
      number++;
      cout << number << ": " << line << endl;
    }
    cout << "Displayed " << number << " lines from the file.\n";

    // 4. Close the file
    inputfile.close();
  }
}

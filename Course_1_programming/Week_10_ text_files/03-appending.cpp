//C:\Users\johnl\OneDrive\Documents\159101 Applied programming\Code\Classes\Week 10 - text files

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream myfile;             // define a file object
string filename, text;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;

  // 2. Open the file for both output and appending
  myfile.open(filename.c_str(), fstream::out | fstream::app);

  // 3. Access the file - in this case, write to the file
  cout << "Now appending lines to " << filename << endl;
  text = "This is a new line to be appended";
  myfile << text << endl;
  text = "This is another new line to be appended";
  myfile << text << endl;
  cout << "Completed writing to file.\n";

  // 4. Close the file
  myfile.close();
}

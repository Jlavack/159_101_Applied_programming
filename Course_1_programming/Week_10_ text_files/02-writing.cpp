#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream datafile;          // define a file object
string filename, text;

int main() {
  // 1. Load the full name of the file into a string
  filename = "data.txt";   /* use \\ for \ */

  // 2. Open the file for writing (output)
  datafile.open(filename.c_str(), fstream::out);

  // 3. Access the file - in this case, write to the file
  cout << "Now writing to " << filename << endl;
  text = "This is the first line in the file";
  datafile << text << endl;
  text = "This is the second line in the file";
  datafile << text << endl;
  text = "And another line in the file...";
  datafile << text << endl;
  text = "This is the last line in the file";
  datafile << text << endl;
  cout << "Completed writing to file.\n";

  // 4. Close the file
  datafile.close();
}

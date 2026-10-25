#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream fileone, filetwo, filethree;   // define three file objects
string filename, name;

int main() {
  // 1. Open the first file for reading
  filename = "Names.txt";
  fileone.open(filename.c_str(), fstream::in);

  // 2. Open the other two files for writing
  filename = "AtoL.txt";
  filetwo.open(filename.c_str(), fstream::out);
  filename = "MtoZ.txt";
  filethree.open(filename.c_str(), fstream::out);

  // only continue if the file has opened successfully
  if (fileone.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {
    // 3. Access the file - read all the lines from the file
    cout << "Processing the names to create new files...\n";
    while (getline(fileone, name)) {
      cout << name << endl;  // DEBUG cout to display all lines
      if ((name[0] >= 'A') && (name[0] <= 'L')) {
        filetwo << name << endl;
      } else {
        filethree << name << endl;
      }
    }
    cout << "File processing complete, check the new files.\n";

    // 4. Close all the files
    fileone.close();
    filetwo.close();
    filethree.close();
  }
}

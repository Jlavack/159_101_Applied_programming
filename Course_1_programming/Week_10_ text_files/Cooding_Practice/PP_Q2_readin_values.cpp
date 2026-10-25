/*2. Write a program that reads the file created in (1) above.  Display the names
 and numbers on the screen in a suitable format.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int number;
fstream datafile;          // define a file object
string filename, line;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;
  getchar();

  // 2. Open the file for reading (input)
  datafile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (datafile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

    // 3. Access the file - read all the lines from the file
    cout << "Displaying all the lines from " << filename << endl;
    number = 0;
    while (getline(datafile, line)) {
      number++;
      cout << number << ": " << line << endl;
    }
    cout << "Displayed " << number << " lines from the file.\n";

    // 4. Close the file
    datafile.close();
  }
}

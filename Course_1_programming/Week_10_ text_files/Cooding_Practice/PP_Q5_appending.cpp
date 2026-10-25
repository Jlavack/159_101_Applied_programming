/*Find the program in Section 10 of the notes to append lines to a file.
Use this program to help you to write a program that reads in a new name with a
 phone number and then append the corresponding new line of data to the file
 created in (1) above.  Use your program from (2) or (3) to display the names
 and check that the new name is now included in the list.
*/

//C:\Users\johnl\Documents\159101_Applied_programming\Code\Classes\Week_10_ text_files\Cooding_Practice\names_numbers.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortnames(int total);
string breakstring(string s);
string breaknum(string s);

int phonenumber;
fstream datafile;          // define a file object
string filename, line, name;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;
  getchar();

  // 2. Open the file for reading (input)
  datafile.open(filename.c_str(), fstream::out | fstream::app);

  // only continue if the file has opened successfully
  if (datafile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

    //Append new names and numbers.
    cout << "Enter a name, end with ??"<< endl;
    getline(cin, name);
    while (name != "??") {
      cout << "Enter a phone number: ";
      cin >> phonenumber;
      cout << endl;
      getchar();
      datafile << name << ";" << phonenumber << endl;
      cout << "Enter a name, end with ??" << endl;
      getline(cin, name);
    }

    datafile.close();
  }
}
//functions--------------------------------------------------------------------

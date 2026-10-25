/*Write a program that reads a file and checks for line repetition. The program must display either
There is a repeated line in this file.
or
No repeated lines in this file.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

fstream inputfile;          // define a file object
int count, i, j, repeats;
string filename, line, str[100];

int main() {
  // 1. The user will enter the full name of the csv file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;

  // 2. Open the file for reading (input)
  inputfile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (inputfile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {
    i=0;
    count = 0;
    while (getline(inputfile, line)) {
      str[i] = line;
      //cout << str[i] << endl;
      i++;
    }
    count = i;
    repeats = 0;
    for(i=0; i<count; i++) {
      for(j=0; j<i; j++) {
        if (str[j] == str[i]) {
          repeats ++;
        }
      }
    }
    //cout << "DEBUG repeats: " << repeats << endl;
    if (repeats >= 1) {
      cout << "There is a repeated line in this file" << endl;
    } else {
      cout << "No repeated lines in this file" << endl;
    }

    inputfile.close();
  }
}

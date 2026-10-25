#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
  int number, i;
  string line, filename;
  fstream datafile, modify;
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;

  // 2. Open the file for reading (input)
  datafile.open(filename.c_str(), fstream::in);

  filename= "modify.txt";
  modify.open(filename.c_str(), fstream::out);

  // only continue if the file has opened successfully
  if (datafile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

//1. load words into array
    number = 0;
    i=0;
    string words[100];
    while (getline(datafile, line)) {
      words[i] = line;
      number ++;
      i++;
    }
//2. concatenate suffix and write
    for (i=0; i < number; i++) {
      words[i] = words[i] + "ing";
      modify << words[i] << endl;
    }

//debug view lines
    for (i=0; i < number; i++) {
     cout << words[i] << endl;
    }
  } //close else

//3. close all files
  datafile.close();
  modify.close();
}

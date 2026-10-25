#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int number;
fstream inputfile;
string filename, line;

int main() {
  //1 enter file name
  cout << "Enter full file path" << endl;
  cin >> filename;

  //2. open file for reading - inputfile
  inputfile.open(filename.c_str(), fstream::in);

  //conditonal on file opening successfully
  if (inputfile.is_open() == false) {
    cout << "Error; not able to open " << filename << endl;
  } else {

    //3. Access the file and read all lines
    number = 0;
    while (getline(inputfile, line)) {
      number++;
      cout << number << ": " << line << endl;
    }
  }

  //4. close the file
  inputfile.close();
}

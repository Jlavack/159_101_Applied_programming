/*3. Expand your program from (2) above to display the names and numbers with
the names in alphabetical order.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortnames(int total);

int number;
fstream datafile;          // define a file object
string filename, line, name[100];

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

    number = 0;
    int i =0;

    for(i=0; getline(datafile, line); i++) {
      name[i] = line;
      number++;
      //cout << "DEBUG " << name[i] << endl;
    }

    sortnames(number);

    for(i=0;i<number;i++) {
      cout<< name[i] << endl;
    }
//-------------Another way-----------------
    //while (getline(datafile, line)) {
    //  name[i] = line;
    //  cout << name[i] << endl;
    //  number++;
    //  i++;
  //  }
  //  cout << "DEBUG number; " <<number << endl;

  //  sortnames(number);

  //  for(i=0;i<number;i++) {
  //    cout<< name[i] << endl;
  //  }

    // 4. Close the file
    datafile.close();
  }
}
//functions--------------------------------------------------------------------
void sortnames(int total) {
  int pass, i;
  string temp;
  for (pass = 0; pass < total; pass++) {
    for (i = 0; i < total - 1; i++) {
      if (name[i] > name[i+1]) {
        temp = name[i];
        name[i] = name[i+1];
        name[i+1] = temp;
      }
    }
  }
}

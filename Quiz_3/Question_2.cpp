#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void breakstring(string s);
int converttoint(string str);

int count, year, mask, gown, difference;
fstream datafile;          // define a file object
string filename, searchname, line, hospital, maskstring, gownstring;

int main() {
  // 1. The user will enter the full name of the file
  filename = "equipment.txt";

  // 2. Open the file for reading (input)
  datafile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (datafile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

    // 3. Access the file - read all the lines from the file
    count = 0;
    while (getline(datafile, line)) {
      breakstring(line);
      mask = converttoint(maskstring);
      gown = converttoint(gownstring);
      if (mask == gown ) {
        cout << hospital << "   no items needed " << endl;
      } else if (mask < gown) {
        difference = gown - mask;
        cout << hospital << "   "<< difference << " masks" << endl;
      } else if (mask > gown) {
        difference = mask - gown;
        cout << hospital << "   "<< difference << " gowns" << endl;
      }
    }
    // 4. Close the file
    datafile.close();
  }
}

void breakstring(string s) {
  // break the string s into smaller strings using the separator
  int total, i;
  i = 0;
  hospital = "";
  while (s[i] != ';') {
    hospital = hospital + s[i];
    i++;
  }
  i++;  // jump over the semi-colon
  maskstring = "";
  while (s[i] != ';') {
    maskstring = maskstring + s[i];
    i++;
  }
  i++;  // jump over the semi-colon
  gownstring = "";
  total = s.length();
  while (i < total) {
    gownstring = gownstring + s[i];
    i++;
  }
}

int converttoint(string str) {
// convert a string to an integer value
  int i, total, result;
  result = 0;
  total = str.length();
  for (i = 0; i < total; i++) {
    result = result * 10 + str[i] - 48;
  }
  return result;
}

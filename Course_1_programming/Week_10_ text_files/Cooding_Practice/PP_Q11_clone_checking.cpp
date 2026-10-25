/*11*. Write a program that reads two files and checks if the files are identical copies.  Display appropriate
messages that state if the two files are identical or not.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

fstream file1, file2;          // define a file object
int count, i, j, repeats;
string filename, line, fileone[100], filetwo[100];

int main() {
  // 1. The user will enter the full name of the csv file
  cout << "Enter the FULL name of the first file: ";
  cin >> filename;

  // 2. Open the files for reading (input)
  file1.open(filename.c_str(), fstream::in);

  cout << "Enter the FULL name of the second file: ";
  cin >> filename;

  file2.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (file1.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {
    i=0;
    while(getline(file1,line)) {
      fileone[i] = line;
      cout << "File one: " << fileone[i] << endl;
      i++;
    }
    j=0;
    while(getline(file2, line)) {
      filetwo[j] = line;
      cout << "File two: " << filetwo[j] << endl;
      j++;
    }
    int max;
    if(i>j) {
      max = i;
    } else if (i < j) {
      max = j;
    } else if (i == j){
      max = i;
    }
    cout << max << endl;

    if (i != j) {
      cout << "These two files are not identical" << endl;
    } else {
      int k;
      int check[max];
      for (k=0; k<max; k++) {
        if(fileone[k] == filetwo[k]) {
          check[k] = 1;
        } else {
          check[k] = 0;
        }
      }
      int total;
      total=0;
      for (k=0;k<max;k++) {
        if (check[k] == 1) {
          total = total+1;
        } else {
          total = total;
        }
      }
      if (total == max) {
        cout << "these files are identical." << endl;
      } else {
        cout << "These files are NOT identical." << endl;
      }

    }

    file1.close();
    file2.close();
  }
}

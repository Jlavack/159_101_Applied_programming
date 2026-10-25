#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream csvfile;          // define a file object
int id[100], exam[100], count, i;
float average, total;
string filename;
char comma;

int main() {
  // 1. The user will enter the full name of the csv file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;

  // 2. Open the file for reading (input)
  csvfile.open(filename.c_str(), fstream::in);

  // only continue if the file has opened successfully
  if (csvfile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {
    // 3. Read the data one number at a time
    i = 0;
    total = 0.0;
    while (csvfile >> id[i] >> comma>> exam[i]) {
      total = total + exam[i];
      i++;
    }
    // 4. Close the file
    csvfile.close();

    // 5. Calculate and display the results
    count = i;
    average = total / count;
    cout << "The class average is " << average << endl;
    for (i = 0; i < count; i++) {
      if (exam[i] > average) {
        cout << "Student " << id[i] << " achieved ";
        cout << exam[i] << endl;
      }
    }
  }
}

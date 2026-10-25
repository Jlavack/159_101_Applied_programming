#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream csvfile;          // define a file object
int mark1, mark2;
string filename, name;

int main() {
  // 1. open the file
  filename = "Test-results.csv";
  csvfile.open(filename.c_str(), fstream::out);

  // 2. enter the data using a trailing value of ?? for the name
  cout << "Enter the student name and end with ?? ";
  getline (cin, name);  // names may have spaces
  while (name != "??") {
    cout << "Enter the result for test 1: ";
    cin >> mark1;
    cout << "Enter the result for test 2: ";
    cin >> mark2;
    getchar();            // clear the input buffer
    csvfile << name << "," << mark1 << "," << mark2 << endl;
    cout << "Enter the student name and end with ?? ";
    getline (cin, name);  // names may have spaces
  }
  cout << "You have created the file called " << filename << endl;
  // 4. Close the file
  csvfile.close();
}

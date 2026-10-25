#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream csvfile;          // define a file object
float amount;
string filename, id;

int main() {
  // 1. open the file
  filename = "banks.csv";
  csvfile.open(filename.c_str(), fstream::out);

  // 2. enter the data using a trailing value of ?? for the name
  cout << "Enter the banks ID ?? ";
  getline (cin, id);  // names may have spaces
  while (id != "??") {
    cout << "Enter the amount: ";
    cin >> amount;
    getchar();            // clear the input buffer
    csvfile << id << "," << amount << endl;
    cout << "Enter the banks ID ?? ";
    getline (cin, id);  // names may have spaces
  }
  cout << "You have created the file called " << filename << endl;
  // 4. Close the file
  csvfile.close();
}

/*1. Write a program that accepts a number of names and phone numbers.
The program must save the names and phone numbers in a file where each line looks like this:
name;number
Use an editor to check that you have created the file with the correct data.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream datafile;          // define a file object
string filename, name;
int phonenumber;

int main() {
  // 1. Load the full name of the file into a string
  filename = "names_numbers.txt";   /* use \\ for \ */

  // 2. Open the file for writing (output)
  datafile.open(filename.c_str(), fstream::out);

  // 3. Access the file - in this case, write to the file
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

  // 4. Close the file
  datafile.close();
}

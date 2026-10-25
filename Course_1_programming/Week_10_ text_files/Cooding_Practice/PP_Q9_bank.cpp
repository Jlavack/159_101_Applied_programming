/*9*. Create a spread sheet of bank account numbers and amounts in each account, for example:
55814  108.30
98123  62.70
81164  127.50
Save the spread sheet as a csv file.  Then write a program that reads data from
the csv file and displays all bank accounts that have more than $100 in the account.
Note: the data has no spaces in it, so there is no need to use getline and also no need to use breakstring.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

fstream csvfile;          // define a file object
int bank[100], count, i;
int amount[100];
char comma;
string filename, word;

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
    while (csvfile >> bank[i] >> comma >> amount[i]) {
      cout << bank[i] << "   " << amount[i] << endl;
      i++;
    }
    // 4. Close the file
    csvfile.close();

    // 5. Calculate and display the results
    count = 0;
    cout << "These accounts have more than $100: " << endl;
    for (i = 0; i < count; i++) {
      if (amount[i] > 100) {
        count ++;
        cout << bank[i] << endl;
      }
    }
  }
}

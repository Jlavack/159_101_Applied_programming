/*4. Expand your program from either (2) or (3) above so that you can enter a
particular name and then display the phone number belonging to that name.
Remember that someone may enter a name that is not in the list.  In this case,
display a suitable message.

--------like the booklist example

split line into a name array and a number array on the ; symbol at index i
then enter a search name
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortnames(int total);
string breakstring(string s);
string breaknum(string s);

int number;
fstream datafile;          // define a file object
string filename, line, searchname, nam, num, name[100], phnum[100];

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
      name[i] = breakstring(line);
      phnum[i] = breaknum(line);
      number++;
      cout << "DEBUG " << name[i] << endl;
    }

    sortnames(number);
//------DEBUG---------
  //  for(i=0;i<number;i++) {
  //    cout<< name[i] << endl;
  //    cout << phnum[i] << endl; //this isn't working
  //  }

    cout << "Enter Search name: " << endl;
    getline(cin, searchname);

    bool present = false;
    while (searchname != "??") {
      for(i=0; i < number; i++) {
        if(name[i] == searchname) {
          present = true;
          cout << name[i] << "'s' number is: " << phnum[i] << endl;
        }
      }
      if (present == false) {
        cout << "Record does not exist" << endl;
      }
      cout << "Enter a Saerch name: " << endl;
      present = false;
      getline(cin, searchname);
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


string breakstring(string s) {
  // break the string s into smaller strings using the separator
  int i;

  i = 0;
  nam = "";
  while (s[i] != ';') {
    nam = nam + s[i];
    i++;
  }
  return nam;
}

string breaknum(string s) {
  int i, total;
  total = s.length();
  i = total;
  num = "";
  while (s[i] != ';') {
    num = num + s[i];
    i--;
  }
  return num;
}

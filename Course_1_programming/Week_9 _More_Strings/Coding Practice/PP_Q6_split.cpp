/*6. Write a program that repeatedly reads in a line containing a name
(might be any number of words), an ID number (7 digits) and a mark, separated
 by semi-colons, until the user chooses to quit.  After each line has been read
 in, the program should run through the string, storing the data in the three
 variables name (a string), id (a string) and mark (an integer) and printing these out.  Example:

Type in name;id;mark or Q to stop: Cecil B. DeMille;9835671;68
Name: Cecil B. DeMille   ID: 9835671   Mark: 68
Type in name;id;mark or Q to stop: Frodo Baggins;6511103;70
Name: Frodo Baggins   ID: 6511103   Mark: 70
Type in name;id;mark or Q to stop: Q
*/

#include <iostream>
#include <string>
using namespace std;

// enter a line of data comma separated
//break the string at the commas
//store each break into a variable

//can be alot like sentance splitting, but on , instead. using
//read to first ; store, erase all prior characters. start again.

string split(string input, int length);

int main() {
  int n;
  n = 1;
  string name[n], id[n];
  int mark[n];
  string input, word;
  int i, j, k, p, length, sub_len;

  cout << "Enter a name, id and mark in the following manner:" << endl;
  cout << "-------------------------------------" << endl;
  cout << "Cecil B. DeMille;9835671;68" << endl << "type Q to stop"<< endl;

i=0;
while (input != "Q") {
  for (j=0; j<i; j++) {
    getline(cin, input);
  }
  i++;
}

//Loads first bit into first array.

}

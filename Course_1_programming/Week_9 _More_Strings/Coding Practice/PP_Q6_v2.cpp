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
string remove(string input);
string trim(string input, int length);

int main() {
  int n;
  n = 1;
  string name[n], id[n];
  int mark[n];
  string input;
  int i, length;

  cout << "Enter a name, id and mark in the following manner:" << endl;
  cout << "-------------------------------------" << endl;
  cout << "Cecil B. DeMille;9835671;68" << endl << "type Q to stop"<< endl;


//Loads first bit into first array.
for (i = 0; i < n; i++) {
  if (input == "Q") {
    break;
  } else if (input != "Q") {
    getline(cin, input);
    length = input.length();

    name[i] = split(input, length);
    input = trim(input, length);
    //cout << input << endl;
    id[i] = split(input, length);
    input = trim(input, length);
    //cout << input << endl;
    input = remove(input);
    mark[i] = stoi(input);

    n++;
  } // ends entry loop

  for (i = 0; i < n-1; i++) {
    cout << "Name: " << name[i] << "  ID: " << id[i] << "  Mark: " << mark[i] << endl;
  } // ends print loop
} // ends entry loop


}
//functions
string split(string input, int length) {
  int j;
  string word;
  word = "";

  for (j = 0; j < length; j ++) {
    if (input[j] != ';') {
      word = word + input[j];
      //cout << "DEBUG word: " << word << endl;
    } else if (input[j] == ';') {
      word = word;
      //cout << "DEBUG word2: " << word << endl;
      return word;
      break;
    }
  }
  return 0;
}

string remove(string input) {
  string remove;
  remove = " ";
  auto iter = input.find(remove);
  while (iter != string::npos) {
    input.erase(iter, remove.length() + 1);
    iter = input.find(remove, iter);
  }
  return input;
}


string trim(string input, int length) {
  int i, k, sub_len;
  string word;
  word = "";

  for (i = 0; i < length; i ++) {
    if (input[i] != ';') {
      word = word + input[i];
    //  cout << "DEBUG word: " << word << endl;
    } else if (input[i] == ';') {
      word = word;
      sub_len = word.length()+1;
      break;
    }
  }
    for (k = 0; k < length; k++) {
      if ((k + sub_len) > length) {
        input[k] = ' ';
      } else {
          input[k] = input[k+sub_len];
        }
      }
    //  length = input.length() - sub_len;
    //  cout << "DEBUG length: " << length << endl;
      return input;
  }

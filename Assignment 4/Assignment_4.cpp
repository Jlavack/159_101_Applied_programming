//2001249 John Lavack
//Assignment three

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

string getinput();
int spacecount(string input);
int roundup(float x);
void split(string input);
string pad(int x);
int array_length(int x, string str[]);
string padding_array(int spaces, int empty_space, string spacearray[]);

string words[100];

int main () {
  string input, output;
  int length, i, j, spaces, count;
  float width, empty_space;

  width = 40.0;
//prompot for input
  cout << "Enter a line of text:" << endl;
  input = getinput(); //ensures no leading or trailing spaces. Not a requirement, but useful.
  length = input.length();

//check input length
  while (length > width) {
    cout << "ERROR: Line of text must be 40 or less characters. Try again." << endl;
    input = getinput();
    length = input.length();
  }
//count spaces in input for use in functions and processes
  spaces = spacecount(input);
//get word count of words. Always one more than spaces, assuming first condition in notes always holds (should, given validations)
  count = spaces + 1;
//make vector of words
  split(input);
//determine length of word array, used for determining empty space
  int word_len = array_length(count, words);
// determine empty space to be filled
  empty_space = width-word_len;
//create an array for the padding with correct elements, equal to number of spaces in input
  string spacearray[spaces];
  i = 0; //intialise for function
  spacearray[i] = padding_array(spaces, empty_space, spacearray);

//justification via interleaving of both arrays
  output = "";
  i = 0;
  j = 0;
  while (i < count && j < spaces) {
    output += words[i];
    output += spacearray[j];
    i++;
    j++;
  }
  if (i < count) {
    output += words[i];
  }
  if (j < spaces) {
    output += spacearray[j];
  }
//display output
  cout << "1234567890123456789012345678901234567890" << endl;
  cout << output << endl;
}

//------functions------------------------------------------------------------//
string getinput() {
  string str;
  getline(cin, str);
  int length = str.length();
  while (str[length-1] == ' ' || str[0] == ' ') {
    cout << "ERROR: input string must not have laeding or trailing spaces. Try again." << endl;
    getline(cin, str);
  }
  return str;
}
//---------------------------------------------------------------------------//
int spacecount(string input) {
  int length = input.length(), spaces, i;
  for (i = 0; i < length; i++) {
    if(input[i] == 32) {
      spaces ++;
    }
  }
  return spaces;
}
//---------------------------------------------------------------------------//
int roundup(float x) {
  if (x - trunc(x) > 0) {
    x = x + 1.0;
  } else {
    x = x;
  }
  return x;
}
//---------------------------------------------------------------------------//
void split(string text) {
  int j, i, length;
  string word;
  word = "";
  length = text.length();

  j = 0;
  for (i = 0; i < length; i++) {
    if (text[i] >= 33 && text[i] <= 122) { //find words between spaces
      word = word + text[i];
      if (i == length - 1) {
        words[j] = word;
        j++;
      }
      //cout << word << endl;//build word by letters between spaces
    } else {
      words[j] = word;
      j++; //count by j, because i wil include blanks
      word = "";//reset word
    }
  }
}
//---------------------------------------------------------------------------//
string pad(int x) {
  int i;
  string str = "";
  for (i=0; i < x; i++) {
    str = str + ' ';
  }
  return str;
}
//---------------------------------------------------------------------------//
int array_length(int x, string str[]) {
  int length = 0, i, len = 0;

  for (i = 0; i < x; i++) {
  len = str[i].length();
  length += len;
  }
  return length;
}
//---------------------------------------------------------------------------//
string padding_array(int spaces, int empty_space, string spacearray[]) {
  int space_len = array_length(spaces, spacearray);
  int i;
  while (space_len < empty_space) { //make each index the correct padding
    for(i = 0; i < spaces; i++) {
      spacearray[i] = spacearray[i] + pad(1);
      space_len ++;
      if (space_len == empty_space) {
        break;
      } //prevent all elements having equal number of spaces
    }
  }
  return spacearray[i];
}
//---------------------------------------------------------------------------//

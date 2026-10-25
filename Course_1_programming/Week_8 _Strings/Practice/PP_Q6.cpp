/*6. Write a program that reads in a line of text and prints out how many
characters and how many words are in the text. (Characters include punctuation and spaces between words.)*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int countwords(string str, int total);
bool isletter(char ch);

int main() {
  string str;
  int charcount, wordcount;

  cout << "Enter a line of text: " << endl;
  getline(cin, str);
  charcount = str.length();
  cout << "DEBUG1 character count is: " << charcount << endl;
  str = str + '#';
  wordcount = countwords(str, charcount+1);
  cout << "The number of characters is " << charcount << endl;
  cout << "The number of words is " << wordcount << endl;
}

//functions
int countwords(string str, int total) {
  int i, count;
  bool is_word;

  i=0;
  count=0;
  is_word=false;

    while (i < total) {
      if (isletter(str[i]) == true) { //if character is a letter, true
        is_word = true;
      } else { //nesting it this way makes sure a trailing space is not included as a word
        if ( is_word == true) {// is not a letter, check to see if is_word is true. If so, iterate count
          count ++;
      }
      is_word = false; //other wise set is_word to false
    }
    i++; // progrss the loop
  }
return count;
}


bool isletter(char ch) {
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
    return true;
  } else {
    return false;
  }
}

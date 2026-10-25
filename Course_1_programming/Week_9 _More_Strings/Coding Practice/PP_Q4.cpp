/*
4. Repeat the program in question 3.  However, this time assume that the list
of words can have a punctuation mark at the end.  A punctuation mark can be .
or ! or ?  Also, the words may be in upper case or lower case (and you must
count the word irrespective of case).  Example:
Enter the search word: cat
Enter some words (end with *): That CAT is a MAD cat! *
The word cat appeared 2 times.*/
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string capital(string text);

int main() {
  string search, text, word;
  int i, count, length;

  word = "";
  count = 0;
  cout << "Enter a search word:" << endl;
  getline(cin, search);
  cout << "Enter some text, end with *:" << endl;
  getline(cin, text);

  //find search word and count it's occurance
  length = text.length();

  search = capital(search);
  text = capital(text);

  for(i = 0; i < length; i++) {
    if (text[i] >= 65 && text[i] <= 122) {
      word = word + text[i];
    } else { //end of word
      if (word == search) {
        count ++;
      }
      word = "";
    }
  }
  cout << "The word " << search << " appeared " << count << " times." << endl;
}


string capital(string text) {
  int i, text_length;

  text_length = text.length();

  for (i=0; i < text_length; i++) {
    text[i] = toupper(text[i]);
  }
  return text;
}

/*3. Write a program that reads in a search word, then reads in several words
ending with a * character.  The program should count how many times the search
word occurs in the text.  Assume that there is no punctuation.  Example:
Enter the search word: cat
Enter some words (end with *): That cat is a mad cat *
The word cat appeared 2 times.
*/
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

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

  for(i = 0; i < length; i++) {
    if (text[i] != ' ') {
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

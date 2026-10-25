#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string findword, replace, sentence, final, word;
int total, i;

int main() {
  cout << "Enter the word to find: ";
  cin >> findword;
  getchar();
  cout << "Enter the replacement word: ";
  cin >> replace;
  getchar();
  cout << "Enter a sentence: ";
  getline(cin, sentence);
  total = sentence.length();
  final = ""; //is the final sentance
  word = "";
  for (i = 0; i < total; i++) { //as long as i is less than the full sentance
    if (sentence[i] == ' ') { //if the array index equal space
      if (word == findword) { //if word = the find word
        final = final + replace + " ";  //final is concatenated with replace
      } else {
        final = final + word + " ";  //else final is concatenate with word that is there now
      }
      word = ""; //word is empty if the index is a space
    } else {
      word = word + sentence[i]; //word is built up between spaces
      cout << "DEBUG1" << word << endl; //word strafes the sentance building up the word between spaces
    }
  }
  cout << "DEBUG2" << word << endl; //the last word in the sentance
  if (word == findword) { //**this inserts the replacement word***    if the word matches the find word
    final = final + replace + " "; //final is concatenated with replace
  } else {
    final = final + word + " "; //else the word remains
  }
  cout << "Final sentence is: " << final << endl;
}

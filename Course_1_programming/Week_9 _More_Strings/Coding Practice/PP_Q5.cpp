/*5. Write a program that reads in some text with a * character at the start of
 a word or line to end input. The program must build up a hidden message from
 the first and last words of each sentence. Input sentences must only have a
 punctuation mark (. or ! or ?) at the end. Example:
Input: The cat sat on the mat. Is that a fact Mr Green? And was the cat's name Fluffy? *
Output: The mat Is Green And Fluffy*/

#include <iostream>
#include <string>
using namespace std;

int findsentence(string s, int p);
string findfirstword(string s, int p);
string findlastword(string s, int p);
string reversestring(string str);

string line, msg;

int main() {
  int i, lastp;
  string firstword, lastword;
  cout << "Enter a line of text (end with *): ";
  getline(cin, line);
  i = 0;
  msg = "";
  while (line[i] != '*') {
    lastp = findsentence(line, i);
    firstword = findfirstword(line, i);
    lastword = findlastword(line, lastp - 1);
    msg = msg + firstword + " " + lastword + " ";
    i = lastp + 2;  // skip the space after the sentence
  }
  cout << msg << endl;
}

int findsentence(string s, int p) {
int i;
// move along the string until the end of sentence
  i = p;
  while (true) {
    if ((s[i] == '.') || (s[i] == '!') || (s[i] == '?')) {
      return i;
    }
    i++;
  }
  return i;
}

string findfirstword(string s, int p) {
int i;
string temp;
// find the first word in the sentence
  i = p;
  temp = "";
  while (s[i] != ' ') {
    temp = temp + s[i];
    i++;
  }
  return temp;
}

string findlastword(string s, int p) {
int i;
string temp, word;
// find the last word in the sentence
  i = p;
  temp = "";
  while (s[i] != ' ') {
    temp = temp + s[i];
    i--;
  }
  word = reversestring(temp);
  return word;
}

string reversestring(string str) {
int i, total;
string reverse;
// reverse the string
  reverse = "";
  total = str.length();
  for (i = total - 1; i >= 0; i--) {
    reverse = reverse + str[i];
  }
  return reverse;
}

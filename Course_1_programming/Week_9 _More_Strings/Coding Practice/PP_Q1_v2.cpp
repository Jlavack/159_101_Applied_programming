#include <iostream>
#include <string.h>
#include <cstdio>
#include <stdio.h>
using namespace std;


//enter 3 words in a string
//remove spaces
//length of string
//display

bool isspace(char c);

void split(string sentance);

int main() {
  string no_space, replace, sentance;
  int length, sum, i;

  replace = "";
  cout << "Enter a sentance. Press [ENTER] when done: ";
  getline(cin, sentance);
  split(sentance);

  length = sentance.length();

  for (i=0; i <= length; i++) {
    if (isspace(sentance[i]) == false) {
      no_space = no_space + sentance[i];
      } else {
      no_space = no_space + replace;
    }
  }

  length = no_space.length();

  for (i=0; i <=length; i++) {
    cout << no_space[i];
  }
  cout << endl;

  cout << "Length of the sentance is: " << length-1 << endl;
}


//function
bool isspace(char c) {
 if (c==32) {
   return true;
 } else {
   return false;
 }
}

void split( string sentance){
   string word = "";
   for (auto x : sentance) {
     if (x== ' ') {
       cout << word << endl;
       word = "";
     }
     else {
       word = word + x;
     }
   }
   cout << word << endl;
}

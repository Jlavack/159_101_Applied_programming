/*8*. Write a program that reads in a string and sets up a second string that
is the first string with all vowels (upper or lower case) deleted.  Example output:

The quick brown fox jumped Over the lazy dog.
Th qck brwn fx jmpd vr th lzy dg.
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

bool vowel(char ch);

int main () {
  string str, no_vowel, replace;
  int i, length;



  replace = "";
  no_vowel = "";
  cout << "Enter a sentance: ";
  getline(cin, str);
  length = str.length();

for (i=0; i <= length; i++) {
  if (vowel(str[i]) == false) {
    no_vowel = no_vowel + str[i];
    } else {
    no_vowel = no_vowel + replace;
  }
}

cout << no_vowel << endl;

}

//function
bool vowel(char ch) {
 if (ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u') {
   return true;
 } else {
   return false;
 }
}

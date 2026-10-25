/*1. Write a program that asks the user for three words, then display the lengths
 of the three words.  Display the sum of these three lengths and the length of
 the three words concatenated (which should be identical).
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


//enter 3 words as strings
//count their lengths
//sum the lengths and Display
int main() {
string word1, word2, word3, sentance;
int len1, len2, len3, sum, len4;

  cout << "Enter three words. Press [ENTER] after each: ";
  getline(cin, word1);
  len1 = word1.length();
  cout << "DEBUG len1: " << len1 << endl;
  getline(cin, word2);
  len2 = word2.length();
  cout << "DEBUG len2: " << len2 << endl;
  getline(cin, word3);
  len3 = word3.length();
  cout << "DEBUG len3: " << len3 << endl;

  sum = len1 + len2 + len3;
  sentance = word1+word2+word3;
  len4 = sentance.length();

  cout << "Length of the three words is: " << len4 << " or by sum: " << sum << endl;
}

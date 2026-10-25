  /*7. Write a program that reads in a string and a letter,
  then prints the index of the second occurrence of the letter in the string. Two examples of output:
  2nd 't' in "computer science at Massey" at position 18.
There are not two 'm's in "computer science at Massey."*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
  string str;
  char ch;
  int i, p, n, count;


  cout << "Enter a sentance: ";
  getline(cin, str);
  n = str.length();
  int a[n];

  for (i=0; i<=n; i++) {
    a[i] = false;
  }

  cout << "Enter a character: ";
  cin >> ch;
  cout << "DEBUG n: " << n << endl;

  for (i=0; i < n; i++) {
    cout << str[i] << " is in position " << i +1 << endl;
  }

//check if character is one input
  cout << endl << "DEBUG positionsing: " << endl;
  count = 0;
  for (i=0; i < n; i++) {
    if (str[i] == ch) {
      p = i+1;
      cout << ch << " is in position " << p << endl;
      count ++;
      }
      a[count] = p;
    }

    cout << "DEBUG count: " << count << endl;

  cout << endl << "DEBUG a[]: " << endl;
  for (i=0; i<=count; i++) {
    cout << a[i] << " is in position " << i << endl;
  }

  if (count >= 2) {
    cout << "The second occurance of " << ch << " is in position " << a[2] << endl;
  } else {
    cout << "There is no second occurance of " << ch << endl;
  }
}

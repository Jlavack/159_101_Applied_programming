/*9*. Write a program that reads in a line of text and records in a counting array,
the number of occurrences of each vowel (a/A, e/E, i/I, o/O, u/U).  The ‘a/A’
count will be recorded at position/index 0, the ‘e/E’ count at position/index 1 etc).
Display the result.  Example:

We know bees are great.
a or A occurs 2 times
e or E occurs 5 times
i or I occurs 0 times
o or O occurs 1 times
u or U occurs 0 times

What sort of cases should you test?*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void vowelcount(string str, int length);

int main(){
  string str;
  int length, i;

  cout << "Enter a sentance: ";
  getline(cin, str);
  length = str.length();

for (i=0; i < length; i++) {
  str[i] = toupper(str[i]);
}

//DEBUG capitalisation cout << str << endl;

vowelcount(str, length);
}

//function
void vowelcount(string str, int length) {
  int counter[5];
  int i;
  char count [5];

  for (i=0; i<5; i++) { //clear counter[]
    counter[i] = 0;
  }

  count[0] = 'A';
  count[1] = 'E';
  count[2] = 'I';
  count[3] = 'O';
  count[4] = 'U';

  for (i=0; i < length; i++) {
    if (str[i] == 'A') {
      counter[0]++;
    } else if (str[i] == 'E') {
      counter[1]++;
    } else if (str[i] == 'I') {
      counter[2]++;
    } else if (str[i] == 'O') {
      counter[3]++;
    } else if (str[i] == 'U') {
      counter[4]++;
    }
  }

  for (i=0; i < 5; i++) {
    cout << count[i] << " equals " <<  counter[i] << endl;
  }

}

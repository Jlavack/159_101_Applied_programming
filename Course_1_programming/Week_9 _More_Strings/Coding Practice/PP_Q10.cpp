/*1. Write a program that reads in a character, encrypts it as a real number
(see how in next sentence) and then stores the encrypted value in an array (max of 100).
To encrypt a character, subtract the position index it will be stored at in the array,
then divide by 2.  The program should do this repeatedly until * is entered and
it should print out the array values.  Example of the display:
Enter several characters (end input with *):
A
c
e
*
32.5 49 49.5
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void encrypt(char a[], int size);

int main () {
  char input;
  char array[100];
  int i, n;

  cout << "Input a character. Type * to stop" << endl;
  cin >> input;
  getchar();
  while (input != '*') {
    array[i] = input;
    i++;
    cin >> input;
    getchar();
    }
    n = i -1;
  cout << "DEBUG1: SIZE OF ARRAY" << n << endl;

cout << "DEBUG2: ARRAY CONTENTS" << endl;
for (i=0; i < n; i++) {
  cout << array[i] << endl;
  }

  cout << "DEBUG2: ARRAY CONTENTS" << endl;
  for (i=0; i < n; i++) {
    cout << int(array[i]) << endl;
    }
encrypt(array, n); //will return the whol funciton output
}

void encrypt(char a[], int size) {
  int i;
  float encrypt[size];
  //float num;

  //num = 0;
  for (i = 0; i <= size; i++) {
    encrypt[i] = (int(a[i]) - i)/2.0;
    cout <<"DEBUG i = " << i << endl;
    //cout << "DEBUG Num is: " << num << endl;
  }

  for (i=0; i <= size; i++) {
    cout << a[i] << " is encrypted to: " << encrypt[i] << endl;
    }
}

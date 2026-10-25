/*4. Write a program that reads in an array of 6 real numbers, deletes the value
at index 2 and displays the changed contents of the array, then inserts 6.75 at
index 1 and displays the contents again.
*/

#include <iostream>
using namespace std;

void display(float a[], int n);

float a[10];
int i, num, insert, size;

int main () {
  cout << "Enter six numbers: " << endl;
  size = 6;
  for (i=0; i < size; i++) {
    cin >> a[i];
  }
  display(a, size);

  cout << endl;

  // shuffle down and delete index 2
  cout << "Shuffling down and deleting index 2 " << endl;
  for (i=2; i < size; i++) {
    a[i] = a[i+1];
  }
  size = size - 1;
  display(a, size);
  cout << endl;

  //shuffle up and insert 6.75 into index 1
  size = size + 1;
  cout << "Setting index 1 to 6.75 " << endl;
  for (i = size +1; i >=2; i--) {
    a[i] = a[i-1];
  }
  a[1] = 6.75;
  display(a, size);
}


  void display(float a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
      cout << "index " << i << " is " <<  a[i] << endl;
    }
    cout << endl;
  }

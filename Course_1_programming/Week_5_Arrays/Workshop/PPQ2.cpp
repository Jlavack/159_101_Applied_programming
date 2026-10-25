/* Write a program that reads several positive integer values into an array. 5
Use a trailing value of –1 to stop the input.
Then display the maximum value and the index of the element that contains the maximum value.
What sort of loop should you use and why?
*/

#include <iostream>
using namespace std;

int input, i, maxi,n;
int array[100];

int main () {
  cout << "Enter some numbers, -1 to stop: \n";
  i=0;
  cin >> input;
  while (input != -1) {
    array[i] = input;
    i++;
    n=i;
    cin >> input;
  }
  maxi = array[0];
  for (i=0; i<n; i++) {
    if (array[i] > maxi) {
      maxi = array[i];
  }
    }
  cout << "Maximum is " << maxi << " and index is " <<i << endl;
}

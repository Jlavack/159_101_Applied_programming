/*6. Write a program that reads 7 real numbers into an array, sorts them into descending order,
then displays the sorted numbers.  What case would test the program most fully?
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/* the array can hold a maximum of 100 numbers */
int number, temp, pass, i;
int data[100];

int main () {
  cout << "Enter a number for the array less than or equalt to 100\n";
  cin >> number;
  for (i=0; i < number; i++) { //use < number since 0 is included in count
    cout << "Enter a number :";
    cin >> data[i]; //allows input of n numbers
  } //close first for loop
  for (pass = 0; pass < number -1; pass++) {//nest code within a pass counter
    for (i=0; i < number - 1; i++) {//run through each number in the pass
      if (data[i] < data[i+1]) {// test condition, if a number is smaller than its neighbour
        temp = data[i]; //remove the smaller value to a temporary location
        data[i] = data[i+1]; //swap positions down
        data[i+1] = temp; // swap positions up
      }
    }
  }
  cout << "The sorted numbers are ";
  for (i=0; i < number; i++) {
    cout << data[i] << ", ";
  }
  cout << endl;
  }

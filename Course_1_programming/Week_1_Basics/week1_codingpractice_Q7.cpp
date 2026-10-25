#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

/* function to calculate average of
 * N numbers.
 */
double average(double n1[], int size)
{
  double sum = 0; // to store sum value
  // calculate sum value
  for (int i = 0; i < size; ++i)
  {
    sum += n1[i];
  }
  // calculate average value
  // and return to caller function
  return sum/size;
}

// main function
int main()
{
  int size; // to store size
  double avg; // to store result value

  // take size as input values
  cout << "Enter size of array: ";
  cin >> size ;

  // declare array
  double arr[size]; // to store numbers

  // take array input, from i=0 iterrate until i=size
  cout << "Enter array elements: ";
  for (int i = 0; i < size; ++i)
  {
    cin >> arr[i];
  }

  // function to find avg of N numbers
  avg = average(arr, size);

  // display result
  cout << "Average = " << avg << endl;

  return 0;
}

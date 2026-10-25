//Write a program that uses a for loop to read in 7 real numbers and store them in an array.  Then use
//another for loop to display the numbers in the reverse order.  Do NOT sort.

#include <iostream>
using namespace std;

int i, input, size, j, pass, temp;
int num[100];

int main () {
  size = 7;
  for (i=0; i < 7; i++) {
    cin >> num[i];
      }
    cout << num[6] << endl;

 // record how many array positions were filled
  cout << "You entered " << size << " numbers\n";

  cout << "\nHere is the full list of numbers\n";
  for (i = 0; i < size; i++) {
    cout << num[i] << "  ";
  }
  cout << endl;

  for(i=0; i < size; i++) {
      j = size-1;
      for(i=0; i < j; i++, j--)
      {
          temp = num[i];
          num[i] = num[j];
          num[j] = temp;
      }

      cout<<"\n\nThe Reverse of Given Array is:\n";
      for(i=0; i<size; i++) {
          cout<<num[i]<<" ";
        }
      cout<<endl;

}
}

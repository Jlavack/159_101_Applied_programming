#include <iostream>
#include <ctime>
using namespace std;

int difference();
//get difference from user
int difference(int diff) {
  int diff;
  cout << "Enter a number between -7 and 7: ";
  cin >> diff;
  while((diff < -7) || (diff > 7)){
     cout << "Try again. Enter a number between -7 and 7: ";
     cin >> diff;  //get new input from the user
   }
  //repeat until condition is FALSE
cout << "You entered " << diff << ".\n";
  //when we reach this line, we know the user entered followed the instructions,
  //or else we would still be stuck in the while loop.
return diff;
}

int main(){
  int difference, diff;
 difference = difference(diff);
 cout << difference(diff) << endl;
}

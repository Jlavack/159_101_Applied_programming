/*. Write a program that prints the numbers 10 to 1 (descending order), using the most appropriate loop.
 */

 #include <iostream>
 #include <cmath>
 #include <iomanip>
 #include <cstdlib>
 using namespace std;

 int i, number;

 int main () {
   number =11;
   i=0;
   while (i <= 10) {
     i++;
     number--;
     cout << number << endl;
   }
  for (number = 10; number >=1; number--) { //easier method
   cout << number << endl;
 }
}

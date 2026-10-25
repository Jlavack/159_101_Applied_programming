#include <iostream>
using namespace std;

int readvalues();
void countvalues(int num);

int data[100], howmany[100];

int main() {
   int num, i;
  // Section 1: read numbers with trailing value of -1
  num = readvalues();


   // Section 2: count how many times each number appears
   countvalues(num);

   // Section 3: display the results
   cout << "Here are the values and how ";
   cout << "many times each value appears:\n";
   cout << "        Values:";
   for (i = 0; i < num; i++) {
     cout.width(4);
     cout << right << data[i];
   }
   cout << "\nHow many times:";
   for (i = 0; i < num; i++) {
     cout.width(4);
     cout << right << howmany[i];
   }
   cout << endl;
 }

 int readvalues() {
  int i, temp;
  i=0;
   cout << "Enter a positive value (-1 to stop): ";
   cin >> temp;
   while (temp > 0) {
     data[i] = temp;
     i++;
     cout << "Enter a positive value (-1 to stop): ";
     cin >> temp;
     }
   return i;
 }

 void countvalues(int n) {
   int i, j;
   for (i = 0; i < n; i++) {
     howmany[i] = 0;
   }
   for (i = 0; i < n; i++) {
     for (j = 0; j < n; j++) {
       if (data[j] == data[i]) {
         howmany[i] ++;
       }
     }
   }
 }

 /*1. Line 14: Function call for countvalues() will not run because there is no prototype.
Solution; input function prototype in line 3 or 5 -> void countvalues(int num);
2. Line 20: variable i is not declared in the function.

Solution;  in line 9 inlcude i in scope -> int num, i;

3. Line 25: Repeat of error 2, AND logic has variable number not declared in scope.
Solution: change number to the variable num -> for (i = 0; i < num; i++)

4. Line 32: Function declaration is wrong. Void readvalues() is not the correct call. Prototype declares a returning function, not a void. Program expects int readvalues();
Solution: change function type -> int readvalues() {}

5. Line 42: Return call not required in a void function.
Solution: when solution for error 4 is made, this will fix. Redefine void readvalues() and int readvalues()\

6. Line 48: Variable howmany is not defined correctly. howmany is an array. Array index is missing.
Solution: add index to variable -> howmany[i] = 0;

7. Line 52: if (data[i] == data[i] ) will always result in a true result. And output will display the same count for every number.
Solution: the indexes must be compared against each other. ->  if (data[j] == data[i])

8. Lines 37 - 43: index is not iterating. i variable doens't increase. Therefore i returned =0. Function countvalues() will read in num = i = 0. And program always returns null results.

Solution: add i++; to the loop after data[i] = temp; ->
data[i[ = temp;
i++;

9. Line 6: data[3] has too few elements in the array. Only four values will be stored, 0 inclusive. Output will only output first four inputs. missing any later values. e.g
5 5 2 2 2 3 3 1 2 3  will be stored as: 5 5 2 2 2 3 3 1 2 2

Solution: Make this a larger value -> data[100]

10. Line 37: While (temp <0) will only allow negative values to be input.

Solution: change the condition -> while (temp > 0).

11. Line 53: howmany[i]=0; will always store 0 as the value at index i. output will display 0 count for all inputs.
Solution: change to -> howmany++;

 */

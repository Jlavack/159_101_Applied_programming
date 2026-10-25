/*5. A line of arithmetic is balanced if there is the correct number of parentheses in the line.
Examples:  (3 + 5) * 2 is balanced.  (2 + 4 * 3 is not balanced.  1 + 6)) * 3 is not balanced.
Write a program that reads in a line of arithmetic, as a string, and states whether it is balanced or not.*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
 int countbrackets(string str, char ch);

 int main() {
   int count1, count2;
   string arithmetic;

   cout << "Enter a line of arithmetic: ";
   getline(cin, arithmetic);
   count1 = countbrackets(arithmetic, '(');
   count2 = countbrackets(arithmetic, ')');

   if (count1 == count2) {
     cout << "The equation is balanced" << endl;
   } else {
     cout << "The equation is unbalanced" << endl;  
   }
 }

//functions
 int countbrackets(string str, char ch) {
   int count, length, i;

   count =0;
   length = str.length();
   for (i=0; i < length; i++) {
     if (str[i] == ch) {
       count++;
     }
   }
   return count;
 }

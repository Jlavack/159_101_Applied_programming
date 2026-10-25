/*2. Write a function  bool lowercase(char c);  that returns true if a character
 is a lowercase letter (‘a’ to ‘z’) and false if it isn’t.  Test your function
 in a main that repeatedly reads characters until the user enters #.*/

 #include <iostream>
 #include <string>
 #include <cstdio>

 using namespace std;

 bool ischar(char c);
 bool lowercase(char c);

 int main () {
   char c;

   cout << "Enter a letter and I will tell you if it is lower case, enter * to end: ";
   cin >> c;
   while (c != '*') {
     if (ischar(c) == true) {
       if (lowercase(c) == true) {
          cout << "The character is lower case." << endl;
       } else if (lowercase(c) == false) {
         cout << "The character is upper case." << endl;
       }
     } else if (ischar(c) == false) {
       cout << "Not a character" << endl;
     }
     cin >> c;
   }
 }

 bool ischar(char c) {
   if (( c < 'a' && c > 'Z') || (c < 'A') || (c > 'z')) {
     return false;
   } else {
     return true;
   }
 }

 bool lowercase(char c) {
   if (int(c) >= 97 && int(c) <= 122) {
     return true;
   } else if (int(c) >= 65 && int(c) <= 90) {
     return false;
   }
   return 0;
 }

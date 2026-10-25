/*Write a C++ program containing 2 loops and only one "*" to produce the following output:
*
**
***
****
*/

#include <iostream>
using namespace std;

int i, num;
char star;

int main () {
  star = '*';
  i = 1;
  num = 1;
  while (i <=4) {
      while (i<=num) {
      if (num==1) {
        cout << star << endl;
        num++;
      } else if (num == 2) {
        cout << star << star << endl;
        num ++;
      } else if (num == 3) {
        cout << star << star << star << endl;
        num ++;
      } else if (num == 4) {
        cout << star << star << star << star << endl;
        num ++;
      }
    }
    i++;
  }
}

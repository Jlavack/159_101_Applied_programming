/*5.  Write a program that reads in an array of student IDs in ascending order,
then reads in 0 for Delete, 1 for Insert or 2 for Quit and carries out the
appropriate action. It must repeatedly read in a choice and carry
out an action until 2 is entered. Display the array after each action.
The screen should look like:
Type in student ID numbers in ascending order: 276 481 517 682 994 -1
Enter an integer to Delete(0) Insert(1) or Quit(2): 1
Enter a new ID number to insert: 503
276   481   503   517   682   994
Enter an integer to Delete(0) Insert(1) or Quit(2): 0
Enter the ID number to delete: 481
276   503   517   682   994
Enter an integer to Delete(0) Insert(1) or Quit(2): 2
End of Program
*/

#include <iostream>
using namespace std;

void isdelete();
void isinsert();
void display(int id[], int n);

int id[100];
int num;

int main() {
  int temp, i, pass;

  cout << "Enter student numbers in ascending order\n";
  i=0;
  cin >> temp;
  while (temp != -1) {
    id[i] = temp;
    i ++;
    cin >> temp;
  }
  num = i;

  //sort input to ascednig order if not already
  for (pass=0; pass < num; pass++) {
    for(i=0; i < num-1; i++) {
      if (id[i] > id[i+1]) {
        temp = id[i];
        id[i] = id[i+1];
        id[i+1] = temp;
      }
    }
  }
  display(id, num);

  cout << "Enter an integer to delete (0), insert (1), or quit (2): \n";
  cin >> temp;
  while (temp != 2) {
    if (temp == 0) {
      isdelete();
    }
    if (temp == 1) {
      isinsert();
    }
    for (i = 0; i < num; i++) {
      cout << id[i] << "  ";
    }
    cout << "\n Enter an integer to delete (0), insert (1), or quit (2): \n";
    cin >> temp;
  }
  cout << "End of program\n";

}

void isdelete() {
  int i, posn, temp;
  cout << "Enter the id to delete: ";
  cin >> temp;
  posn = -1;
  for (i=0 ; i < num; i++) {
    if (id[i] == temp) {
      posn = i; //posn hold the id for deleting
    }
  }
  if (posn > 0) {
    for (i= posn; i < num; i++) {
      id[i] = id[i+1];
    }
    num --;
  }
}

void isinsert() {
  int posn, i, newid;
  cout << "Enter the id to insert: ";
  cin >> newid;
  i = 0;
  while (newid > id[i]) {
    i++;
    if (i== num) {
      break;
    }
  }
  posn = i; //hold the number for insert
  for (i = num; i > posn; i--) {
    id[i] = id[i-1];
  }
  id[posn] = newid;
  num++;
}

void display(int id[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << "index " << i << " is " <<  id[i] << endl;
  }
}

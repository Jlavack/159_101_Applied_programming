/*7. There are 7 students in a class.
Write a program that reads the student ID number and a test mark for each student.
Find the average test mark for the class.
Set up two new corresponding arrays that store the ID numbers and marks of only
those students who scored higher than the average mark.  Display the ID numbers
and marks of students who scored above average, with ID numbers in ascending order.
What would you have to change if the data had to be printed out in ascending mark order?
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

int id, score, i, size, pass, temp;
float sum, average;
int student[100], mark[100];

int main () {
//input students
  cout << "Enter size of class: ";
  cin >> size;
  cout << endl;
  sum = 0.0;

  cout << "Enter sutdent ID followed by their mark" << endl;
  for (i=0; i < size; i++) {
    cout << "Student ID: ";
    cin >> id;
    if (id >999999999) {
      while (cin.fail()) {
        cout << "ERROR: not a valid student ID\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a valid ID: ";
        cin >> id;
      }
    }
    cout << "Score is: ";
    cin >> score;
    cout << endl;
    student[i] = id;
    mark[i] = score;
    sum = sum + mark[i];
  }

    //sort IDs into ascending order
  for (pass=0; pass < size; pass++) {
    for(i=0; i < size; i++) {
      if (student[i] < student[i+1]) {
        temp = student[i];
        student[i] = student[i+1];
        student[i+1] = temp;
        temp = mark[i];
        mark[i] = mark [i+1];
        mark[i+1] = temp;
      }
    }
  }

  //calculate average
  average = sum / size;
  cout << "The average is " << average << endl;


//debug show students and their marks
  cout << "Here are the students' marks you entered\n";
  for (i=0; i < size; i++) {
    cout << "Student " << student[i] << " mark was: " << mark[i] << endl;
  }
  cout << endl;

//cut out students lower than average
  for (i=0; i < size; i++) {
    if (mark[i] >= average) {
      cout << "Student: " << student[i] << " with mark: " << mark[i] << " is above the average of " << average << " by " << mark[i] - average << " points." << endl;
    }
  }

}

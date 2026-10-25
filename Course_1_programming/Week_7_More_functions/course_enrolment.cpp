#include <iostream>
using namespace std;

bool checkcore(int corecrs[], int count, int coursenum);

int main() {
  int num, numcore, i, temp, corecount;
  int core[10], courses[40];

// section 1 : load the core courses
  numcore = 3;
  core[0] = 159101;
  core[1] = 161111;
  core[2] = 247112;

// section 2 : load the courses for one student
  i = 0;
  cout << "Enter a course for this student (-1 to stop) ";
  cin >> temp;
  while (temp != -1) {
    courses[i] = temp;
    i++;
    cout << "Enter a course for this student (-1 to stop) ";
    cin >> temp;
  }
  num = i;
  cout << "This student is taking " << num << " courses.\n";

// section 3 : count how many core courses
  corecount = 0;
  for (i = 0; i < num; i++) {
    if (checkcore(core, numcore, courses[i])) {
      corecount++;
    }
  }
  cout << corecount << " of the courses are core courses.\n";
}

bool checkcore(int corecrs[], int count, int coursenum) { //core[] becomes corecrs[], count is the numcore=3, corursenum[] is the values of courses[i] are sent one at a time as part of the loop
  int i;
  for (i = 0; i < count; i++) {
    if (coursenum == corecrs[i]) {
      return true;
    }
  }
  return false;
}

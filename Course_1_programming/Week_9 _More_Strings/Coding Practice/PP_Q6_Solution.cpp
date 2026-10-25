#include <iostream>
#include <string>
using namespace std;

string input, name, id;
int mark, i, j;
string names[100], ids[100];
int marks[100];

int main() {
  j=0;
  while (true) {
    cout << "Type in name;id;mark or Q to stop: ";
    getline(cin, input);
    if (input[0] == 'Q') { break; }
    input = input + ";";  // put another ; at the end
    i = 0;
    name = "";
    while (input[i] != ';') {
      name = name + input[i];
      i++;
    }
    i++;
    cout << "Name: " << name;
    id = "";
    while (input[i] != ';') {
      id = id + input[i];
      i++;
    }
    i++;
    cout << "    ID: " << id;
    mark = 0;
    while (input[i] != ';') {
      mark = mark*10 + input[i] - 48;
      i++;
    }
    cout << "    Mark: " << mark << endl;
    names[j] = name;
    marks[j] = mark;
    ids[j] = id;
    j++;
    }

    for (i=0; i<j; i++) {
      cout << "Name: " << names[i] << "  ID: " << ids[i] << "  mark: " << marks[i] << endl;
    }
}

#include <iostream>>
using namespace std;

int m;

int main () {
  cin >> m;
  if ( (m != 32) && (m != 24) ) {
    cout << "Result one\n";
  }
  if ( ! (m != 32) && (m != 24) ) {
    cout << "Result two\n";
  }
  if ( ! ( (m != 32) && (m != 24) ) ) {
    cout << "Result three\n";
  }
}

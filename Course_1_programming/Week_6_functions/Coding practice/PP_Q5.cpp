/*7. Write a function that reads 5 real numbers from 0.0 to 100.0 into an array,
checking that input is valid, and displaying any values between 50.0 and 60.0 to 2 decimal places.
*/
#include <iostream>
using namespace std;

float check(float temp);
void display(float a[], int size);
int i;

int main () {
  float a[100];
  float temp;
  int size;

  size = 5;
  cout << "Input five numbers form 0-100: " << endl;
  for (i=0; i < size; i++) {
    cin >> temp;
    a[i] = check(temp);
  }

  for (i=0; i < size; i++) {
    cout << a[i] << " ";
  }

  cout << endl << "Displaying values between 50 and 60\n";
  display(a, size);
}


//Check function
float check(float temp) {
  float input;
  if (temp < 0.0 || temp > 100.0) {
    cout << "ERROR: Input out of bounds " << endl;
    i--;
  } else {
    input = temp;
  }
  return input;
}

//display between 50.0 and 60.0
void display(float a[], int size) {
  int i;

    for (i=0; i < size; i++) {
      if ((a[i] >= 50.0) && (a[i] <= 60.0)) {
        cout << a[i] << " ";
    }
  }
}

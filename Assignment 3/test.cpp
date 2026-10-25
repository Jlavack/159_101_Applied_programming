#include <iostream>
#include <iomanip>

using namespace std;

float absolute(float x);

int main () {
  float array[6];
  float average, percent;
  int i, j;

  average = 10.0;
  percent = 2.0;

  array[0] = 12.2;
  array[1] = 13.0;
  array[2] = 10.60;
  array[3] = 10.0;
  array[4] = 5.60;
  array[5] = 9.0;


  for (i=0; i<6; i++) {
    cout << i+1 << " has " << array[i] << " volts." << endl;
  }
j=0;
for (i=0; i<6; i++) {
  if (array[i] > (average + percent) || array[i] < (average - percent)) {
    cout << j+1 << ". Voltage at hour " << i+1 << " was " << setprecision(1) << fixed << array[i] << " volts (difference of " << absolute(average - array[i]) << " volts)." << endl;
    j++;
  }
}

}

float absolute (float x) {
  float result;
  if (x > 0) {
    result = x;
  } else {
    result = -1.0 * x;
  }
  return result;
}

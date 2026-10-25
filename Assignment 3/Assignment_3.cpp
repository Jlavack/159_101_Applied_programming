//2001249 John Lavack
//Assignment three

#include <iostream>
#include <iomanip>

using namespace std;

/* Insert six values
calculate average
display volts that differ from average by >10%
display consecutive hours where the change between them is > 15% -> I take this to be the absolute change, not a positive change only
if this is not the intended interpretation, the fix is to remove the function call to absolute() in line 100 -> absolute(y-x)
*/

//function prototypes
float average(float array[], int size); //calculates average volts
bool header(float array[], float mean); //prints header if problems exist
void problem_check(float array[], float mean); //generates the list of problems
bool prob_check_1(float x, float mean); //checks for type one problems
bool prob_check_2(float x, float y, float mean); //checks for type two problems
float absolute (float x); //the absolute value function

int main() {
  float volts[6];
  float mean;
  int i;

//input volts
  cout << "Enter 6 voltages: ";
  for (i = 0; i < 6; i++) {
    cin >> volts[i];
  }

//calculate average & percents
  mean = average(volts, 6);

//print average & percentages
  cout << "The average is " << setprecision(1) << fixed << mean << " volts." << endl;
  cout << "10% = " << setprecision(1) << fixed << mean*0.1 << " volts." << endl;
  cout << "15% = " << setprecision(1) << fixed << mean*0.15 << " volts." << endl;
  cout << endl;

//print header & problems
  if (header(volts, mean) == true) {
    cout << "The following problems occurred:" << endl;
    problem_check(volts, mean);
  } else if (header(volts, mean) == false) {
    cout << "No problems were encountered." << endl;
  }

}

//functions
float average(float array[], int size) {
  int i;
  float total, result;
  total = 0.0;
  for (i = 0; i < size; i++) {
    total = total + array[i];
  }
  result = total / size;
  return result;
}

bool header(float array[], float mean) {
  int i;

  for (i = 0; i < 6; i++) {
    if ((prob_check_1(array[i], mean) == true) || (prob_check_2(array[i], array[i+1], mean) == true)) {
      return true;
    }
  }
  return false;
}

void problem_check(float array[], float mean) {
  int i, count;
  float diff;
  count=0;

  for (i = 0; i < 6; i++) {
    if (prob_check_1(array[i], mean) == true) {
      cout << count+1 << ". Voltage at hour " << i+1 << " was " << setprecision(1) << fixed << array[i] << " volts (difference of " << absolute(mean - array[i]) << " volts)." << endl;
      count++;
    }
  }
  for (i = 0; i < 5; i++) { //there will never be a comparison of hour 6 to hour 7, so i < 5 is used
    if (prob_check_2(array[i], array[i+1], mean) == true) {
      diff = absolute((array[i+1] - array[i]));
      cout << count+1 << ". Voltage change from hour " << i+1 << " to hour " << i+2 << " was "<< setprecision(1) << fixed << diff << " volts." << endl;
      count++;
    }
  }
}

bool prob_check_1(float x, float mean) {
  if (x > (mean + (0.1*mean)) || x < (mean - (0.1*mean))) {
    return true;
  } return false;
}

bool prob_check_2(float x, float y, float mean) {
  if (absolute(y - x) > (0.15*mean)) {
    return true;
  } return false;
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

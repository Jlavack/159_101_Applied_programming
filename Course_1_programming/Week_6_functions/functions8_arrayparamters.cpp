#include <iostream>
using namespace std;

float getaverage(float arr[], int count);

// there are no global variables

int main() {
  float results[5], average;
  int num, i;
  cout << "How many test results do you have? ";
  cin >> num;
  for (i = 0; i < num; i++) {
    cout << "Enter result " << i+1 << ": ";
    cin >> results[i];
  }
  average = getaverage(results, num);
  cout << "The class average is " << average << endl;
}
//results is an array type: results[] can pass into the arr[] parameter
//if we enter num as > results[5] then results lets in numbers up to 7, and divides over the 
// whole array size.
float getaverage(float arr[], int count) {
  int i;
  float total, result;
  total = 0.0;
  for (i = 0; i < count; i++) {
    total = total + arr[i];
  }
  result = total / count;
  return result;
}

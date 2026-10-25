#include <iostream>
#include <iomanip>
using namespace std;


float average(float array[], int size);

int main () {
  int code, a, w;
  float akl[100], wlg[100];
  float price, wlg_average, akl_average;

//instructions
  cout << "Enter code and petrol price for each region." << endl;
  cout << "Wellington code is 4, Auckland code is 9, enter -1 to stop" << endl;
//initialise counts
  a = 0;
  w = 0;
//input data with conditions
  while (code != -1) {
    cin >> code;
    if (code == -1) {
      break;
    }
    cin >> price;
    if (code == 4) {
      wlg[w] = price;
      w++;
    } else if (code == 9) {
      akl[a] = price;
      a++;
    } else {
      break;
    }
  }
//Ca;culate conditional averages
  if (w != 0) {
    wlg_average = average(wlg, w);
  } else {
    wlg_average = 0;
  }

  if (a != 0) {
    akl_average = average(akl, a);
  } else {
    akl_average = 0;
  }
// output
  if (akl_average == 0) {
    cout << "No prices entered for Auckland." << endl;
  } else {
    cout << "Auckland average petrol price is $";
    cout << setprecision(2) << fixed << akl_average << endl;
  }

  if (wlg_average == 0) {
    cout << "No prices entered for Wellington." << endl;
  } else {
    cout << "Wellington average petrol price is $";
    cout << setprecision(2) << fixed << wlg_average << endl;
  }
}

//funcitons
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

//2001249 John Lavack
//Assignment two

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

int i, count;
float judges, mark, sum, average;

int main () {
  sum = 0;

//Judges code
  cout << "Enter the number of judges: \n";
  cin >> judges;

//This validation is used to make sure neither string nor float/double are used as inputs for judges
  while (cin.fail()||(judges-floor(judges))) { //as long as input is of incorrect type OR judges input is judges has a floating value
    cout << "ERROR. Enter an integer between 4 and 8, only: " << endl;
    cin.clear(); //clears cin error state from cin.fail so we can continue processing
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores the input buffer
    cin >> judges; // calls for new input, hopefully right data type this time.

    if(!cin.fail()) //if the input doesn't fail, break the validation loop
    break;
  }

  i=0;
  while (judges <4 || judges >8) {
    cout <<"ERROR. Enter the number of judges again. There must be between 4 and 8 judges: " << endl;
    cin >> judges;
    while (cin.fail()||(judges-floor(judges))) {
      cout << "ERROR. Enter an integer between 4 and 8, only: " << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> judges;

      if(!cin.fail())
      break;
    } // the validation was put here again because if it wasn't,
    // entering a number of judeges out of bounds, then an invalid type of data would cause an infinite error loop
  }
//Judges code ends

//Mark code starts
  i=judges; //run the loop as many times as there are judges
  for (judges = 1; judges <= i; judges ++) {
    cout << "Enter mark: ";
    cin >> mark;

    //as long as input fails, run the following loop
    // this first validation is on the first input. Else there is an infinite output loop
    while(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout << "ERROR. Enter an number only. "<< endl;
      cout << "Enter mark again\n";
      cin >> mark;

      if(!cin.fail()) {
        break;
      }
    }
    while (mark < 0.0 || mark > 10.0) {
      cout << "ERROR. Enter mark again. Mark is between 0.0 and 10.0\n";
      cout << "Enter mark again\n";
      cin >> mark;
      /*nest the loop for checking the bounds inside the validation loop. So that both validation and
    limits ,can be tested in the same loop. Then nest the validation loop inside the bounds checking,
    so that both process doesn't end up with validation errors and missed loops */

      while(cin.fail()) { //run this loop again to avoid an out of bound entry to skip the loop
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "ERROR. Enter an number only. "<< endl;
        cout << "Enter mark again\n";
        cin >> mark;

        if(!cin.fail()) {
          break;
        }
      }
    }
    sum = mark + sum;
    average = sum / judges;
  }

  //remoe max and min of the input marks and average the rest
  cout << "Final mark: ";
  cout << setprecision(2) << fixed << average << endl;
}


/* The process:
1. Input x judges
2. Validate input data
3. Check data bounds
4a.If pass 3 and 4, proceed to 5
4b. If fail 2 or 3 enter loop. Loop 1 - 3 until input is valid and within bounds
5. Input mark for marks for judges
6. Validate input data
7. Check data bounds
8a. If pass 6 and 7 go to 9
8b. if fail 67 and 7 loop 5-7 until valid and in bounds data in inputs
9. Store mark.
10. Check: have all marks been input? If yes go to step 11. If no loop 5-10 until all marks suppleid
11. Calculate average


TESTING
1. Enter judges correctly. - PASS
2. Enter marks correctly - PASS
3. Enter negative Judges - PASS
4. enter out of bounds Judges - PASS
5. enter judges as real numbers (partial judges....Gortesque!) - PASS
6. enter judges as string or character - PASS
7. Enter first judge incorrectly and fail. Then enter correctly. Then enter second or following judges incorrectly - PASS
At first this would trigger an endless error loop OR would reduce the judges by 1, accepting an out of bounds input as 0.
This was resolved by including the vlaidation twice. Once for the initial input, and thena gain inside the loop.
I found it easier to allow judges to be a real number, and then include a condition in the while loop to floor() the input.
Otherwise I was not able to figure out how to stop real numbers passing into the programe.
8. Enter negative marks - PASS
9. Enter marks as string - PASS
10. Enter marks as integer - should be accepted. - PASS
11. Enter first mark wrong, then correctly. Then enter subsequent marks incorrectly, then correctly. - PASS
similar to case 7

NOTE: I was reasearching how to validate data and came across the cin.[function] class of funcitons.
And the limits library. These proved useful to help validate integer or float inputs. Though we haven't
covered these or vlaidation in class yet.
*/

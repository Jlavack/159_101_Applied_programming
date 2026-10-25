#include <iostream>
using namespace std;

int t, hours, minutes, seconds, allminutes, days, dayhours, years, yeardays;

int main () {
  t=727329968;
  allminutes = t / 60;
  hours = allminutes / 60;
  minutes = allminutes % 60;
  seconds = t % 60;
  days = hours / 24;
  dayhours = hours % 24;
  years = days / 365;
  yeardays = days % 365;
  cout << t << " seconds is " << hours << " hours ";
  cout << minutes << " minutes " << seconds << " seconds." << endl;
  cout << days << " days, " << dayhours << " hours " << minutes << " minutes " << seconds << " seconds." << endl;
  cout << years << " years " << yeardays << " days, " << dayhours << " hours " << minutes << " minutes " << seconds << " seconds.";
}

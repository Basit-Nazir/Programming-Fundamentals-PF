// Basit Nazir          21I-1205
#include <iostream>
#include <iomanip>
using namespace std;
int main () {

  int day, date=1, space=0;
  cout << endl << setw(50) << "Calendar Generator\n";
  cout << "\t----------------------------------------------------------------\n\n";

  cout <<"==> Please Input Day of Week as Integer...\nExample: Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7...\n";
  cout <<"Day:  ";
  cin >> day;
  cout << "----------------------------------------------------------------\n";
  cout << "\tMon\tTue\tWed\tThu\tFri\tSat\tSun\n";
  cout << "----------------------------------------------------------------\n";
  day--;
  while (space < day)
  {
      cout <<"\t";
      space++;
  }
  while (date <=29)
  {
      cout << "\t" << date;
      if ((day + date) % 7 == 0)
      {
          cout << "\n";
      }
      date++;
  }

  cout << "\n----------------------------------------------------------------\n\n";

  return 0;
}

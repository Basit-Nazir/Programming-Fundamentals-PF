// Basit Nazir          21I-1205
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << endl << setw(35) << "==> Bill Calculator <==\n";
    cout << "--------------------------------------------\n";
    float amtDue;
    int amtRec, amtRtn, dollar, quarter, dime, nickel, penny= 1;
    cout << "\n=> Please Enter the Amount Due in Dollars...\nDollars:  ";
    cin >> amtDue;
    cout << "\n=> Please Enter the Amount Received in Dollars...\nDollars:  ";
    cin >> amtRec;
    amtRtn = (amtRec-amtDue)*100;
    cout << "\n\n---------------- BILL -----------------\n";
    cout << "Amount Due: $" << amtDue << "\nAmount Received: $" << amtRec << endl;
    cout << "\nThe Amount to Return is...";
    if (amtRtn%100==0)
    {
        cout << "\nDollars: " << amtRtn/100;
    }
    else if (amtRtn%25==0)
    {
        cout << "\nDollars: " << (dollar = amtRtn/100);
        amtRtn = amtRtn - dollar*100;
        cout << "\nQuarter: " << amtRtn/25;
    }
    else if (amtRtn%10==0)
    {
        cout << "\nDollars: " << (dollar = amtRtn/100);
        amtRtn = amtRtn - dollar*100;
        cout << "\nQuarter: " << (quarter = amtRtn/25);
        amtRtn = amtRtn - quarter*25;
        cout << "\nDime: " << amtRtn/10 ;
    }
    else if (amtRtn%5==0)
    {
        cout << "\nDollars: " << (dollar = amtRtn/100);
        amtRtn = amtRtn - dollar*100;
        cout << "\nQuarter: " << (quarter = amtRtn/25);
        amtRtn = amtRtn - quarter*25;
        cout << "\nDime: " << (dime = amtRtn/10);
        amtRtn = amtRtn - dime*10;
        cout << "\nNickel: " << amtRtn/5;
    }
    else
    {
        cout << "\nDollars: " << (dollar = amtRtn/100);
        amtRtn = amtRtn - dollar*100;
        cout << "\nQuarter: " << (quarter = amtRtn/25);
        amtRtn = amtRtn - quarter*25;
        cout << "\nDime: " << (dime = amtRtn/10);
        amtRtn = amtRtn - dime*10;
        cout << "\nNickel: " << (nickel =amtRtn/5);
        amtRtn = amtRtn - nickel*5;
        cout << "\nPennies: " << amtRtn ;
    }
    cout << "\n---------------------------------------\n\n";

    return 0;
}

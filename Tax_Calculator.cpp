// Basit Nazir          21I-1205
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << endl << setw(50) << "\t-------------- TAX CALCULATOR --------------\n\n";
    double income;
    cout << "\t=> Please Enter Annual Income...\n\tIncome:  ";
    cin >> income;
    if (!cin)
    {
        cout << "\n\tOh No! You Enter Wrong Key...\n";
    }
    else
    {
        cout << "\n\t--------------------------------------------";
        if (income <= 600000)
        {
            cout << "\n\tHooray! The Tax for Annual Income Is Zero '0'\n";
        }
        else if (income <= 1200000)
        {
            cout << "\n\tThe Tax for Annual Income Is " << (income-600000)*0.05 << endl;
        }
        else if (income <= 1800000)
        {
            cout << "\n\tThe Tax for Annual Income Is " << 30000 + 0.1*(income-1200000) << endl;
        }
        else if (income <= 2500000)
        {
            cout << "\n\tThe Tax for Annual Income Is " << 90000 + 0.15*(income-1800000) << endl;
        }
        else
        {
            cout << "\n\tThe Tax for Annual Income Is " << 0.175*(income-2500000) << endl;
        }
        cout << "\t--------------------------------------------\n";

    }

    return 0;
}

// Basit Nazir          21I-1205
/*Part B: Write a C++ program that inputs amount and price of gold and silver and calculates the
amount of Zakat on the its value according to the following criteria.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << endl << setw(30) << "ZAKAT CALCULATOR\n";
    int z = 1;
    while (z<=43)
    {
        cout << '.';
        z++;
    }
    double amtGold, amtSilver, prcGold, prcSilver;
    cout << endl << setw(10) << "Enter the amount (Weight) of Gold in grams;\nWeight = ";
    cin >> amtGold;

    cout << endl << setw(10) << "Enter the price of 1 gram of Gold; \nPrice = ";
    cin >> prcGold;

    cout << endl << setw(10) << "Enter the amount (Weight) of Silver in grams; \nWeight = ";
    cin >> amtSilver;

    cout << endl << setw(10) << "Enter the price of 1 gram of Silver; \nPrice = ";
    cin >> prcSilver;

    while (z<=86)
    {
        cout << '.';
        z++;
    }

    if (amtGold > 87.45)
    {
        cout << setw(5) << "\nThe Amount of Zakat is " << prcGold*amtGold*0.025;
    }
    else if (amtSilver > 606.32)
    {
        cout << setw(5) << "\nThe Amount of Zakat is " << prcSilver*amtSilver*0.025;
    }
    else
    {
        cout << setw(5) << "\nThe Amount of Zakat is Zero.\n";
    }

    return 0;
}

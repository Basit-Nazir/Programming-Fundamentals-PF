// Basit Nazir          21I-1205
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    string str;
    float y = 0.53055;
    int x,month;
    cout << endl << setw(40) << "LUNAR HIJRI CALENDAR\n";
    cout << "\t--------------------------------------------\n\n";
    cout << "==> Please Enter The Month in Integer...\n";
    cout << "Muharram = 1, Safar = 2, Rabi-al-Awwal = 3, Rabi-Al-Thani = 4, Jumad-Al-Awwal = 5, Jumad-Al-Thani = 6\nRajab = 7, Shauban = 8, Ramadan = 9, Shawwal = 10, Dhul Qadah = 11, Dhul Hijja = 12\n\nEnter Month:  ";
    cin >> month;
    cout << "----------------------------------";
    cout << "\nNo. of Days\tMonth\n";
    cout << "----------------------------------\n";
    if (month>=1&&month<=12)
    {
        for (int z =1; z<=12; z++)
        {
            if (month == 1 || month==13)
            str = "Muharram";
            if (month == 2 || month==14)
            str = "Safar";
            if (month == 3 || month==15)
            str = "Rabi-Al-Awwal";
            if (month == 4 || month==16)
            str = "Rabial-Thani";
            if (month == 5 || month==17)
            str = "Jumada-Al-Awwal";
            if (month == 6 || month==18)
            str = "Jumada-Al-Thani";
            if (month == 7 || month ==19)
            str = "Rajab";
            if (month == 8 || month==20)
            str = "Shaban";
            if (month == 9 || month==21)
            str = "Ramadan";
            if (month == 10 || month==22)
            str = "Shawwal";
            if (month == 11 || month==23)
            str = "Dhul Qadah";
            if (month == 12)
            str = "Dhul Hijja";
            x=y;
            cout << 29+x << "\t\t" << str << endl;
            y = y+0.53055-x;
            month++;

        }
    cout << "----------------------------------\n\n";
    }
    else
        cout << "The Entered Number is Incorrect...";
    return 0;
}

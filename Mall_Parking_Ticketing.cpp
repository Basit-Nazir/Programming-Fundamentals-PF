// Basit Nazir          21I-1205
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int t1, t2;
    float entry, time, exit, m1, m2;
    cout << endl << setw(45) << "<-- EMPORIUM MALL LAHORE -->\n";
    cout << setw(45) << "*** PARKING MANAGEMENT ***\n\n";
    cout << "=> Enter the Entry Time... (Enter time in 24 hour 'hh.mm' format) \nTime:  ";
    cin >> entry;
    if (!cin)
    {
        cout << "\nOh No!...\n\tThe input was not a Number";
    }
    else
    {
        t1 = static_cast<int>(entry);
        m1 = (entry - t1)*100/60;
        entry = t1 + m1;
        t2 = static_cast<int> (exit);
        m2 = (exit - t2)*100/60;
        exit = t2 + m2;
        if (entry >=0 && entry < 24)
        {
            cout << "\n=> Enter the Exit Time... (Enter time in 24 hour 'hh.mm' format) \nTime:  ";
                cin >> exit;
            if (!cin)
            {
                cout << "\nOh No!...\n\tThe input was not a Number";
            }
            else
            {
                if (entry < exit)
                {
                    if (exit >=0 && exit < 24)
                    {
                        time = exit - entry;
                        cout << "\n==> Hey There! You Parked Your Vehicle for " << time << " hours <==";
                        if (time <=1)
                        {
                            cout << "\nThe Parking Charge for " << time << " hours is Rs. " << time*50 << "\n\n";
                        }
                        else if (time>1 && time<=3)
                        {
                            cout << "\nThe Parking Charge for " << time << " hours is Rs. " << time*100 << "\n\n";
                        }
                        else
                        {
                            cout << "\nThe Parking Charge for " << time << " hours is Rs. " << time*350 << "\n\n";
                        }
                        for (int i = 1; i <=60; i++)
                        {
                            cout << "-";
                        }
                        cout << "\n\tThanks for Shopping from EMPORIUM MALL!!!\n\t\tHope to see you again";
                    }
                    else
                    {
                        cout << "\nOh no! You Entered Wrong Time Format \nPlease Enter correct 24 hours Time Format... ";
                    }
                }
                else
                {
                    cout << "\nOh no! You Entered Wrong Time Format...";
                }
            }

        }
        else
            cout << "\nOh no! You Entered Wrong Time Format \nPlease Enter correct 24 hours Time Format... ";

    }



    return 0;
}

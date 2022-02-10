/*
Name: Basit Nazir
Roll # 21I-1205
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, n;
    cout << "\n\t-------- GRAPHING TOOL --------\n\n";
    do
    {
        cout << "Enter the Maximum Absolute Value of 'x' : ";
        cin >> x;
        if (x<0)
        {
            cout << "\nOh No! You Entered Negative Value of 'x'...\n";
        }
    }while(x<0);

    do
    {
        cout << "Enter the Value of 'n' : ";
        cin >> n;
        if (n<=0)
        {
            cout << "\nOh No! You Entered Wrong Value of 'n'...\n";
        }
    }while(n<=0);

    int limit=x;
    cout << "--------------------------------------------------\n";
    cout << "The Graph of 'x' = " << x << " and 'n' = " << n << " is... \n\n";

    for (int i=(pow(x,n)+pow(x, (n-1))); i>=0; i-=2)
    {
        cout << i;
        for(int j=(x); j>=0; j--)
        {
            cout << "   ";
        }
        for (int k=x ;k>=0;k--)
        {
            if (pow(x,n)+pow(x,(n-1))==i)
            {
                cout << "*";
                x--;
            }
        }
        cout << endl;
    }

    for (int hor=0; hor<=(limit); hor++)
    {
        cout << "   ";
        cout << hor;
    }

    return 0;
}


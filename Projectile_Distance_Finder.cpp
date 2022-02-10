/*
Name: Basit Nazir
Roll # 21I-1205
*/

#include <iostream>

using namespace std;

double *calculateVelocity(double v)
{
    const double t=0.01, g=9.8;
    double s=0, a;
    int c=1;
    static double calculatedVelocity[100];
    a=(-1)*v;
    for (int i =0; v>a ; i++)
    {
        while (c<=100)
        {
            s = s + v*t; // calculating distance
            v = v - g*t; // calculating velocity
            c++;         // counter
        }

        calculatedVelocity[i]= s;
        c=1;  // counter
    }
    return calculatedVelocity;
}

double *verification(double v)
{
    int t=1;
    const double g = 9.8;
    double s, delv=v;
    double a = -1*v;
    static double actualVelocity[100];

    for (int i =0; s>0 ; i++)
    {
        s = v*t-(0.5*g*t*t);        // Actual Distance
        actualVelocity[i]= s;
        t++;
    }
    return actualVelocity;
}

void printing(double *p, double *q)
{
    cout << "Time\t\tCalculated Distance\tActual Distance\n";
    for (int i=0; !(*(p+(i+1))==0); i++)
    {
        cout << i+1 << "\t\t" << *(p+i) << "\t\t\t" << *(q+i) << endl;
    }
}

int main()
{
    double v, *p, *q;
    cout << "\n\t------- Projectile Body Distance Calculator ---------\n\n";
    cout << "Hello User...\nPlease Enter Initial Velocity of Cannon Ball...";
    do
    {
        cout << "\nEnter Velocity:  ";
        cin >> v;
        if (v<0)
        {
            cout << "\nOH No! You entered wrong Velocity...";
        }
    }while (v<0);
    cout << endl;
    p = calculateVelocity(v);
    q = verification(v);

    printing(p, q);



    return 0;
}


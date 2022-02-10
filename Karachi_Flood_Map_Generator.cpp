/*
Name:   Basit Nazir
Section:    P
Roll#   21I-1205

*/
#include <iostream>
#include <time.h>
using namespace std;

void printing(char floodMap[][60])
{
    char sector='A';            // for printing sector Number
    for(int i=0; i<60; i++)
    {
        if (i==0 || i==20||i==40)
        {
            cout << "\n\t\t\t----- Sector " << sector << " -----\n";
            sector++;
        }
        for (int j=0; j<60; j++)
        {
            cout << floodMap[i][j] << '\t';   //each element of 2d array represent 1 km^2
        }
        cout << endl;
    }
}

int main()
{
    double rain;
    cout << "\n\t-----NATURAL DISASTER MANAGEMENT KARACHI-----\n";
    cout<< "\t\tFLOOD MAP GENERATOR\n";
    cout << "\nEnter the expected amount of rainfall: ";
    cin >> rain;

    double altitudeMap2d[60][60];

    srand(time(nullptr));       // for getting non-repeated random numbers;

    for(int i=0; i<60; i++)
    {
        for (int j=0; j<60; j++)
        {
            altitudeMap2d[i][j] = rand()%528 + 1;   //each element of 2d array represent 1 km^2
        }
    }

    char floodMap[60][60];
    int limit;              // capacity to hold flood
    int remain;         //remainnig water after drainage
    for(int i=0; i<60; i++)
    {
        if (i<20)
        {
            limit = 40;
        }
        else if (i<40)
        {
            limit = 75;
        }
        else
        {
            limit = 120;
        }

        remain = rain - limit;

        for (int j=0; j<60; j++)
        {

            if (altitudeMap2d[i][j]-remain<=30)
            {
                floodMap[i][j] = '~';
            }
            else
                floodMap[i][j] = ' ';

        }
    }
    printing(floodMap);






    return 0;
}

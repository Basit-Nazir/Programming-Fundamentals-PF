/*
Name: Basit Nazir
Roll # 21I-1205
*/

#include <cmath>
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(double x, double y)
{
	COORD position = { x, y };      // setting positions
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void point(double x, double y)
{
	gotoxy(x, y);
	cout << ".";
}

void Axis(double limit)
{
	for (double x = 0; x <= limit; x++)
	{
		gotoxy(x, 50);          // going down to increase graph
		cout << "_";            // printing x axis
	}
}

int main()
{
    double v, angle, vx, vy;
	cout << "\n\t ----- GRAPHING TOOL -----\n\n";
	cout << "Hello User\n";
	do
    {
        cout << "\nEnter Value of Initial Velocity :  ";
        cin >> v;
        if (v<=0)
        {
            cout << "\nOH NO! You Entered Wrong Value of Velocity...\n";
        }
    }while(v<=0);

    do
    {
        cout << "Enter Value of Angle in Degree:  ";
        cin >> angle;
        if (angle<=0)
        {
            cout << "\nOH NO! You Entered Wrong Value of Angle...\n";
        }
    }while (angle<=0);

    system("cls");          // Clear the Screen

	angle = angle*3.14/180.0;       // Degree to Radian

	vx = v*cos(angle);
	vy = v*sin(angle);

double totalFlightTime = (2*vy) / 9.8;
double timeStep = totalFlightTime /50;  // <------  Changing Value will vary precision

double X;
double Y;
double Z = vx*totalFlightTime;  //length of X-Axis

Axis(Z);

for (double t = 0; t <= totalFlightTime; t = t + timeStep)
{
    X = vx * t;
    Y = vy * t - 0.5*9.8*t*t;
    Sleep(100);
    point(X, 50-Y);
}
system("pause>0");
return 0;
}

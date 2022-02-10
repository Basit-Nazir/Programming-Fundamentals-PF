/*
Name: Basit Nazir
Roll # 21I-1205
*/
#include <iostream>
using namespace std;

void flag()
{
    for (int row = 1; row <=7; row++)
    {
        for (int col = 1; col <= 29; col++)
        {

            if (col==1 || col ==8)
            {
                cout << "|";
            }
            if (row==2 && ( (col >= 16 && col<=18) || col== 23) )
            {
                cout << "*";
            }
            else if (row == 3 && (col == 15 || col == 16 || col == 21 || col == 23 || col == 25))
            {
                cout << "*";
            }
            else if (row ==4 && (col == 14 || col ==15 || col == 21 || col == 25))
            {
                cout << "*";
            }
            else if (row == 5 && (col== 15 || col == 16))
            {
                cout << "*";
            }
            else if (row == 6 && (col == 17 || col==18 || col == 19))
            {
                cout << "*";
            }
            else
            cout << ".";
        }
        cout << "|" << endl;
    }

}

void diamond()
{
    int z = 1;
    for (int row = 1; row<=5; row++)
    {

        for (int space=4; space>=row; space--)
        {
            cout << " ";
        }
        for (int col= row-1; col>=-(row-1); col--)
        {
            cout << (z-abs(col));
        }
        z+=2;
        cout << endl;
    }
    z-=4;
    for (int row = 4; row>=1; row--)
    {
        for (int space=4; space>=row; space--)
        {
            cout << " ";
        }
        for (int col= row-1; col>=-(row-1); col--)
        {
            cout << (z-abs(col));
        }
        z-=2;
        cout << endl;
    }
}

void pyramid()
{
    for (int row = 7; row>=1; row--)
    {

        for (int space=6; space>=row; space--)
        {
            cout << " ";
        }
        for (int col= row-1; col>=-(row-1); col--)
        {
            cout << (row-abs(col));
        }
        cout << endl;
    }
}


void triangle()
{
    for (int row = 1; row<=5; row++)
    {
        for (int space=4; space>=row; space--)
        {
            cout << "   ";
        }
        for (int col=1; col<=row; col++)
        {
            cout << '-';
            cout << '.';
            cout << '*';
        }
        cout << endl;
    }
}

void star()
{
    for (int row = 1; row<=7; row++)
    {
        for (int col= 1; col<=16; col++)
        {
            if (row ==1 && col == 8)
            {
                cout << "*";
            }
            else if (row ==2 && (col>=7&& col<=9))
            {
                cout << "*";
            }
            else if (row == 3 && (col>=6 && col <= 10))
            {
                cout << "*";
            }
            else if (row == 4 && (col>=1 && col <= 15))
            {
                cout << "*";
            }
            else if (row == 5 && ((col>=4 && col <= 6)||(col >=10 && col <=12)))
            {
                cout << "*";
            }
            else if (row == 6 && (col==3 || col == 4 || col == 12 || col ==13))
            {
                cout << "*";
            }
            else if (row == 7 && (col==2 || col == 14))
            {
                cout << "*";
            }
            else
            cout << ' ';
        }
        cout << endl;
    }
}


int main()
{
    char option, answer;
    cout << "\n\t-------- HELLO USER --------\n";

    do
    {
        cout << "\nPLEASE SELECT THE OPTION TO VIEW SHAPE...\n";
        cout << "A. Flag\nB. Number Diamond\nC. Number Pyramid\nD. Star\nE. Triangle\n";
        do
        {
            cout << "Enter Option:  ";
            cin >> option;
            if (!(option == 'A' || option == 'B' || option == 'C' || option =='D' || option =='E'))
                cout << "\nOh No! You Enter Wrong Option. Please Re-Enter Correct One...\n";
        } while (!(option == 'A' || option == 'B' || option == 'C' || option =='D' || option =='E'));

        if (option == 'A')
            flag();
        else if (option == 'B')
            diamond();
        else if (option == 'C')
            pyramid();
        else if (option == 'D')
            star();
        else
            triangle();

        do
        {
            cout << "\n\nDo You Want to Continue Viewing Shapes (Y or N)...\nAnswer: ";
            cin >> answer;
        } while (!(answer == 'Y' || answer == 'N'));

        if (answer == 'N')
        {
            cout << "\nThanks for Having Time with Us....\n";
        }
    } while (answer == 'Y');


    return 0;
}

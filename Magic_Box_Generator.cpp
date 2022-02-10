/*
Name:   Basit Nazir
Section:    P
Roll#   21I-1205

*/

#include <iostream>
using namespace std;

int main()
{
    int row, middle, last;
    cout << "\n\t-------- MAGIC BOX GENERATOR ----------";
    cout << "\n\n\n";
    cout << "Enter Row or Columns: ";
    cin >> row;
    cout << "\nPlease Wait a Second....\n";

    int magic[row][row];
    middle = ((row+1)/2)-1;
    last = row-1;

    for (int i=0; i<row; i++)
    {
        for (int col=0; col<row; col++)
        {
            magic[i][col] = 0;
        }
    }

    for (int i=1; i<=row*row; i++)
    {
        do
        {
            if (magic[middle%row][last%row]==0)
            {
                magic[middle%row][last%row]=i;
                middle++;
                last++;
            }
            else
            {
                middle-=1;
                last-=2;
            }
        }while(magic[middle%row][last%row]!=0);
    }

    cout << "The Magic Box is .... \n\n";
    for (int i=0; i<row; i++)
    {
        for (int col=0; col<row; col++)
        {
            cout << magic[i][col] << '\t';
        }
        cout << endl;
    }

    return 0;
}

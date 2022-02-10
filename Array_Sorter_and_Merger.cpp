/*
Name:   Basit Nazir
Section:    P
Roll#   21I-1205

*/
#include <iostream>
using namespace std;

void dataEntry(int a1[], int a2[], int a3[])
{
    cout << "\nPlease Enter Elements of 1st Array\n";
    for (int i=0; i<5; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> a1[i];
    }

    cout << "\n\nPlease Enter Elements of 2nd Array\n";
    for (int i=0; i<5; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> a2[i];
    }

    cout << "\n\nPlease Enter Elements of 3rd Array\n";
    for (int i=0; i<5; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> a3[i];
    }
}

void dataView(int a1[], int a2[], int a3[])
{
    cout << "\nThe Elements of 1st Array Before Sorting And Merging: \n";
    for (int i=0; i<5; i++)
    {
        cout << '\t' << a1[i];
    }
    cout << endl;

    cout << "\nThe Elements of 2nd Array Before Sorting And Merging: \n";
    for (int i=0; i<5; i++)
    {
        cout << '\t' << a3[i];
    }
    cout << endl;

    cout << "\nThe Elements of 3rd Array Before Sorting And Merging: \n";
    for (int i=0; i<5; i++)
    {
        cout << '\t' << a3[i];
    }
    cout << endl;
}



int main()
{
    int a1[5];
    int a2[5];
    int a3[5];

    cout << "\n\t ------ Array Sorter & Merger ------\n\n";

    dataEntry(a1, a2, a3);  // data entry

    dataView(a1, a2, a3);   // unsorted and unmerged data show

    int temp[15];
    int a=0;
    for (int i=0; i<5; i++)     // temporary array filling
    {
        temp[a]=a1[i];
        temp[a+1]=a2[i];
        temp[a+2]=a3[i];
        a+=3;
    }

    cout << "\n\n\n";


    int t;
    for (int i=0; i<15; i++)        // sorting of temporary array
    {
        for (int j=0; j<14; j++)
        {
            if (temp[j]>temp[j+1])
            {
                t = temp[j];
                temp [j] = temp[j+1];
                temp [j+1]=t;
            }
        }
    }


    for (int i = 0; i<5; i++)       // storing result as per ascending order
    {
        a3[i]=temp[i];
        a2[i]=temp[i+5];
        a1[i]=temp[i+10];
    }

    for (int i=0; i<3; i++)         // Showing Results
    {
        if (i==0)
        {
            cout << "\nThe Elements of 3rd Array After Sorting And Merging: \n";
        }
        if (i==1)
        {
            cout << "\nThe Elements of 2nd Array After Sorting And Merging: \n";
        }
        if (i==2)
        {
            cout << "\nThe Elements of 1st Array After Sorting And Merging: \n";
        }
        for (int j=0; j<5; j++)
        {
            if (i==0)
            {
                cout << a3[j] << '\t';
            }
            if (i==1)
            {
                cout << a2[j] << '\t';
            }
            if (i==2)
            {
                cout << a1[j] << '\t';
            }


        }
        cout << endl;

    }




    return 0;
}

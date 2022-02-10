/*
Name:   Basit Nazir
Section:    P
Roll#   21I-1205

*/
#include <iostream>
#include <cmath>
using namespace std;

void multiply(double m1[][10], double m2[][10], int r1, int c1, int c2)
{
    double mult[r1][c2];
    cout << "\nThe Multiplication of Matrices is: \n";
    for(int i = 0; i < r1; ++i)
    {
        for(int j = 0; j < c2; ++j)
        {
            for(int k = 0; k < c1; ++k)
            {
                mult[i][j] += m1[i][k] * m2[k][j];
            }
            cout << '\t' << mult[i][j];
        }
        cout << endl;
    }
}
void add(double m1[][10], double m2[][10], int r1, int c1)
{
    double add[r1][c1];
    cout << "\nThe Addition of Matrices is: \n";
    for(int row = 0; row < r1; row++)
    {
        for(int col = 0; col < c1; col++)
        {
            add[row][col] = m1[row][col] + m2[row][col];
            cout << '\t' << add[row][col];
        }
        cout << endl;
    }
}

void norm(double m1[][10],int r1, int c1)
{
    double norm[r1][c1];
    double sum=0;
    for (int row = 0; row<r1; row++)
    {
        for (int col=0; col<c1; col++)
        {
            norm[row][col]= m1[row][col] * m1[row][col];
            sum+=norm[row][col];
        }

    }
    cout << "\nThe Norm of the Matrix is: " << sqrt(sum);

}

void inverse(double mat[][10], int r1, int c1)
{
    double determinant = 0;
    if (r1==2 && c1==2)
    {
        determinant = (mat[0][0]*mat[1][1]) - (mat[1][0]*mat[0][1]);
        if (determinant == 0)
        {
            cout << "The Inverse of Matrix Does Not Exist...";
        }

        else
        {
            cout<<"\n\ndeterminant: "<< determinant;
            cout<<"\n\nInverse of matrix is: \n";
            cout << mat[1][1]/determinant << '\t' << -1*mat[0][1]/determinant << '\n' << -1*mat[1][0]/determinant << '\t' << mat[0][0]/determinant << '\n';
        }
    }

    else
    {
        for(int i = 0; i < r1; i++)             //finding determinant
        {
            for (int j=0; j<r1; j++)
            {
                determinant += (mat[0][i] * (mat[1][(i+1)%r1] * mat[2][(i+2)%r1] - mat[1][(i+2)%r1] * mat[2][(i+1)%r1]));
            }
        }
        if (determinant == 0)
        {
            cout << "The Inverse of Matrix Does Not Exist...";
        }

        else
        {
            cout<<"\n\ndeterminant: "<< determinant;
            cout<<"\n\nInverse of matrix is: \n";
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < r1; j++) {
                    cout << ((mat[(j+1)%3][(i+1)%r1] * mat[(j+2)%r1][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
                }
                cout << endl;
            }

        }
    }





}






int main()
{
    double m1[10][10], m2[10][10];
    int r1, c1, r2, c2;
    char operation;
    bool p = true, q=false, r=false;

    cout << "\n\t-------Welcome To The Matrix Calculator--------\n\nPlease Select Operation You want To Perform...";
    do
    {
        cout << "\nA. Addition\nB. Multiplication \nC. Norm \nD. Inverse\nE. EXIT\nEnter Option: \n";
        cin >> operation;
        switch (operation=='A'||operation=='B'||operation=='C'||operation=='D'||operation=='E')
        {
            case 0: cout << "\nOh No! You Entered Wrong Option...\nPlease Select Correct Option...";
            break;
        }
    }while (!(operation=='A'||operation=='B'||operation=='C'||operation=='D'||operation=='E'));


    while (p == true)
    {
        cout << "Enter the rows for first matrix: ";
        cin >> r1;
        cout << "Enter the columns for first matrix: ";
        cin >> c1;
        cout << "Enter the rows for second matrix: ";
        cin >> r2;
        cout << "Enter the columns for second matrix: ";
        cin >> c2;

        switch (operation)
        {
            case 'A':   switch (r1==r2&&c1==c2)
                        {
                            case 1:     p = false;
                                        q = true;
                                        r = true;
                                        break;
                        }
                        break;

            case 'B':   switch (c1==r2)
                        {
                            case 1:     p = false;
                                        q = true;
                                        r = true;
                                        break;
                        }
                        break;

            case 'C':   p = false;
                        q = true;
                        break;

            case 'D':   switch (r1==c1 && (r1>=2 && r1<=3))
                        {
                            case 1:     p = false;
                                        q = true;
                                        break;
                        }
                        break;
            case 'E':   return 0;
        }
        switch (p)
        {
            case true:
                cout << "\nOH NO! You Entered Wrong Rows or Columns for Selected Operation\n";
                break;
            default:
                break;
        }
    }

    if (q==true)
    {
        // Storing elements of First matrix.
        cout << endl << "Enter elements of First matrix:" << endl;
        for(int row = 0; row < r1; row++)
        {
            for(int col = 0; col < c1; col++)
            {
                cout << "Enter the element of row " << row + 1 << " and col " << col + 1 << " : ";
                cin >> m1[row][col];
            }
        }

    }

    if (r == true)
    {
        // Storing elements of second matrix.
        cout << endl << "Enter elements of Second matrix:" << endl;
        for(int row = 0; row < r2; row++)
        {
            for(int col = 0; col < c2; col++)
            {
                cout << "Enter the element of row " << row + 1 << " and col " << col + 1 << " : ";
                cin >> m2[row][col];
            }
        }
    }

    switch (operation)
    {
        case 'A':   add(m1, m2, r1, c1);
                    break;
        case 'B':   multiply(m1,m2,r1,c1,c2);
                    break;
        case 'C':   norm(m1,r1,c1);
                    break;
        case 'D':   inverse(m1, r1, c1);
                    break;
    }

    return 0;
}

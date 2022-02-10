
// Basit Nazir          21I-1205
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    char answer;
    cout << endl << setw(40) << "Quadrilateral Type Guesser\n";
    cout << "-----------------------------------------------------\n\n";
    cout << "\n=> Are all sides equal? (Y or N)...\nAnswer:  ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        cout << "\n=> Are all angles 90? (Y or N)...\nAnswer:   ";
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            cout << "\nI got it! its a Square.";
        }
        else if (answer == 'n' || answer == 'N')
        {
            cout << "\nI got it! its a Rhombus.";
        }
        else
            cout << "\nOH NO! You Entered Wrong Character...";
    }
    else if (answer == 'n' || answer == 'N')
    {
        cout << "\n=> Are opposite sides are parallel and Equal? (Y or N)...\nAnswer:   ";
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            cout << "\n=> Are all angles 90? (Y or N)...\nAnswer:  ";
            cin >> answer;
            if (answer == 'Y' || answer == 'y')
            {
                cout << "\nI got it! its a Rectangle.";
            }
            else if (answer == 'N' || answer == 'n')
            {
                cout << "\nI got it! its a Parallelogram.";
            }
            else
                cout << "\nOH NO! You Entered Wrong Character...";
        }
        else if (answer == 'N' || answer == 'n')
        {
            cout << "\n=> Does atleast one pair of opposite sides unequal and parallel? (Y or N)...\nAnswer:   ";
            cin >> answer;
            if (answer == 'Y' || answer == 'y')
            {
                cout << "\nI got it! Its a Trapezium.";
            }
            else if (answer == 'N' || answer == 'n')
            {
                cout << "\n=> Are adjacent sides equal? (Y or N)...\nAnswer:  ";
                cin >> answer;
                if (answer == 'Y' || answer == 'y')
                {
                    cout << "\=> nAre opposite angles Equal? (Y or N)...\nAnswer:  ";
                    cin >> answer;
                    if (answer == 'Y' || answer == 'y')
                    {
                        cout << "\nI got it! Its a Kite";
                    }
                    else if (answer == 'N' || answer == 'n')
                    {
                        " \nUnable to guess quadrilateral\nAre you sure you answered questions correctly, if not start answering again";
                    }
                    else
                        cout << "\nOH NO! You Entered Wrong Character...";
                }

                else if (answer == 'N' || answer == 'n')
                {
                    cout << "\nUnable to guess quadrilateral\nAre you sure you answer question correctly, if not start answering again";
                }

                else
                    cout << "\nOH NO! You Entered Wrong Character...";

            }
            else
                cout << "\nOH NO! You Entered Wrong Character...";
        }
        else
            cout << "\nOH NO! You Entered Wrong Character...";
    }

    else
        cout << "\nOH NO! You Entered Wrong Character...";

    return 0;
}

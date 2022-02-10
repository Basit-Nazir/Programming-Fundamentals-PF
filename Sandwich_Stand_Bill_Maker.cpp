// Basit Nazir          21I-1205
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int intfce = 0, x=0, q1,q2,q3,q4,q5,cheese;
    char begin, bread, filling, v1, v2, v3, v4, v5, d1, d2, d3, d4;
    cout << endl << setw(85) << "Welcome to Sandwich Stand\n\n";
    cout << "\t\t\t\t\tWe serve you with variety of flavors and personalizations\n\n";
    while (intfce <= 161)
    {
        cout << "*";
        intfce++;
    }
    cout << endl << setw(75) << "MENU\n";
    while (intfce <= 323)
    {
        cout << "*";
        intfce++;
    }
    cout << "\nBread Type" << setw(20) << "Fillings" << setw(20) << "Cheese" << setw(30) << "Veggies" << setw(55) << "Dressings\n\n";
    cout << "\n- White" << setw(24) << "- Chicken" << setw(18) << "- Yes" << setw(22) << "- lettuce" << setw(20) << "- Green pepper" << setw(27) << "- Mayonnaise" << setw(15) << "- Cheese" << setw(25) << "- Pepper Sause\n";
    cout << "- Brown" << setw(23) << "- Shrimp" << setw(18) << "- No" << setw(23) << "- Carrot" << setw(13) << "- Onion" << setw(39) << "- Thousand Island" << setw(10) << "- Sesame" << setw(19) << "- Wasabi\n";
    cout << "- Whole Grain" << setw(15) << "- Fish" << setw(43) << "- Tomato" << setw(15) << "- Pickles" << setw(31) << "- Spicy bbq" << setw(24) << "- Yellow Musturd" << setw(18) << "- Grape Vinigar\n";
    cout << setw(30) << "- Veggie" << setw(43) << "- Cucumber" << setw(12) << "- Olives" << setw(30) << "- Ketchup" << setw(19) << "- Chilli\n";
    while (intfce <= 485)
    {
        cout << "*";
        intfce++;
    }
    cout << "\n\nPress any key and then press Enter to begin...\n";
        cin >> begin;
    cout << "\n\nStep 01: \nChoose your Bread Type... \na. White \nb. Brown \nc. Whole Grain \nBread Type:  ";
        cin >> bread;
    if (bread =='a' || bread =='b' || bread =='c')
    {
        cout << "\n\nStep 02: \nChoose your Favorite filling... \na. Chicken \nb. Shrimp \nc. Fish \nd. Veggie \nFilling:  ";
        cin >> filling;
        if (filling =='a' || filling =='b' || filling =='c' || filling =='d')
        {
            cout << "\n\nStep 03: \nWith Cheese or Not: (1 for YES and 0 for NO):  ";
            cin >> cheese;
                if (cheese ==1 || cheese ==0)
                {
                    cout << "\n\nStep 04: \nPlease Select any Five Veggies Given Below... (You can skip Veggies by Pressing Zero)";
                    cout << "\na. Lettuce \nb. Green Pepper \nc. Carrot \nd. Onion \ne. Tomato \nf. Pickles";
                    cout << "\nPlease Enter the first Veggie... \nFirst Veggie:  ";
                    cin >> v1;
                    if (v1 == 'a' || v1 == 'b' || v1 == 'c' || v1 == 'd' || v1 == 'e' || v1 == 'f' || v1 =='0')
                    {
                        cout << "\nPlease Enter the second Veggie... \nSecond Veggie:  ";
                        cin >> v2;
                        if (v2 == 'a' || v2 == 'b' || v2 == 'c' || v2 == 'd' || v2 == 'e' || v2 == 'f' || v2 == '0')
                        {
                            cout << "\nPlease Enter the third Veggie... \nThird Veggie:  ";
                            cin >> v3;
                            if (v3 == 'a' || v3 == 'b' || v3 == 'c' || v3 == 'd' || v3 == 'e' || v3 == 'f' || v3 =='0')
                            {
                                cout << "\nPlease Enter the fourth Veggie... \nFourth Veggie:  ";
                                cin >> v4;
                                if (v4 == 'a' || v4 == 'b' || v4 == 'c' || v4 == 'd' || v4 == 'e' || v4 == 'f' || v4 =='0')
                                {
                                    cout << "\nPlease Enter the fifth Veggie... \nFifth Veggie:  ";
                                    cin >> v5;
                                    if (v5 == 'a' || v5 == 'b' || v5 == 'c' || v5 == 'd' || v5 == 'e' || v5 == 'f' || v5 =='0')
                                    {
                                        cout << "\n\nStep 05: \nPlease Select any four Dressing given Below... (You can skip it by pressing 0)\n";
                                        cout << "a. Mayonnaise \t\tg. Spicy BBQ \nb. Cheese \t\th. Yellow Musturd \nc. Pepper Sauce \ti. Grape viniger \nd. Thousand Island \tj. Ketchup \ne. Sesame \t\tk. Chilli \nf. Wasabi \n";
                                        cout << "Please Enter First Dressing... \nFirst Dressing:  ";
                                        cin >> d1;
                                        if (d1 == 'a' || d1 == 'b' || d1 == 'c' || d1 == 'd' || d1 == 'e' || d1 == 'f' || d1 == 'g' || d1 == 'h' || d1 == 'i' || d1 == 'j' || d1 == 'k' || d1 == '0')
                                        {
                                            cout << "\nPlease Enter Second Dressing... \nSecond Dressing:  ";
                                            cin >> d2;
                                            if (d2 == 'a' || d2 == 'b' || d2 == 'c' || d2 == 'd' || d2 == 'e' || d2 == 'f' || d2 == 'g' || d2 == 'h' || d2 == 'i' || d2 == 'j' || d2 == 'k' || d2 == '0')
                                            {
                                                cout << "\nPlease Enter Third Dressing... \nThird Dressing:  ";
                                                cin >> d3;
                                                if (d3 == 'a' || d3 == 'b' || d3 == 'c' || d3 == 'd' || d3 == 'e' || d3 == 'f' || d3 == 'g' || d3 == 'h' || d3 == 'i' || d3 == 'j' || d3 == 'k' || d3 == '0')
                                                {
                                                    cout << "\nPlease Enter Fourth Dressing... \nFourth Dressing:  ";
                                                    cin >> d4;
                                                    if (d4 == 'a' || d4 == 'b' || d4 == 'c' || d4 == 'd' || d4 == 'e' || d4 == 'f' || d4 == 'g' || d4 == 'h' || d4 == 'i' || d4 == 'j' || d4 == 'k' || d4 == '0')
                                                    {
                                                        switch(v1)
                                                        {
                                                        case '0': q1=0;
                                                        break;
                                                        default: q1=1;
                                                        }
                                                        switch(v2)
                                                        {
                                                        case '0': q2=0;
                                                        break;
                                                        default: q2=1;
                                                        }
                                                        switch(v3)
                                                        {
                                                        case '0': q3=0;
                                                        break;
                                                        default: q3=1;
                                                        }
                                                        switch(v4)
                                                        {
                                                        case '0': q4=0;
                                                        break;
                                                        default: q4=1;
                                                        }
                                                        switch(v5)
                                                        {
                                                        case '0': q5=0;
                                                        break;
                                                        default: q5=1;
                                                        }
                                                        q1 = q1+q2+q3+q4+q5;
                                                        cout << "\n----------------------------------------------------------------";
                                                        cout << endl << setw(40) << "- - BILL - -\n";
                                                        cout << "----------------------------------------------------------------\n";
                                                        cout << "Item \t\tQuantity \tItem Price \tTotal Price\n";
                                                        cout << "\nBread \t\t1 \t\t80 \t\t80";
                                                        cout << "\nFilling \t1 \t\t170 \t\t170";
                                                        cout << "\nCheese \t\t" << cheese << "\t\t" << 100 << "\t\t" << 100*cheese;
                                                        cheese=(100*cheese);
                                                        cout << "\nVeggie \t\t" << q1 << "\t\t" << 35 << "\t\t" << 35*q1;
                                                        q5=(35*q1);
                                                        switch(d1)
                                                        {
                                                        case '0': q1=0;
                                                        break;
                                                        default: q1=1;
                                                        }
                                                        switch(d2)
                                                        {
                                                        case '0': q2=0;
                                                        break;
                                                        default: q2=1;
                                                        }
                                                        switch(d3)
                                                        {
                                                        case '0': q3=0;
                                                        break;
                                                        default: q3=1;
                                                        }
                                                        switch(d4)
                                                        {
                                                        case '0': q4=0;
                                                        break;
                                                        default: q4=1;
                                                        }
                                                        q1 = q1+q2+q3+q4;
                                                        cout << "\nDressing\t"<<q1 << "\t\t30 \t\t" << 30*q1;
                                                        q1=30*q1;
                                                        cout << "\n----------------------------------------------------------------";
                                                        cout << "\n\tTotal Bill: Rs." << 80+170+cheese+q5+q1;
                                                        cout << "\n----------------------------------------------------------------\n\n";
                                                    }
                                                    else
                                                        cout << "\nOh NO! You Entered Wrong Character...";
                                                }
                                                else
                                                    cout << "\nOh NO! You Entered Wrong Character...";
                                            }
                                            else
                                                cout << "\nOh NO! You Entered Wrong Character...";
                                        }
                                        else
                                            cout << "\nOh NO! You Entered Wrong Character...";
                                    }
                                    else
                                        cout << "\nOh NO! You Entered Wrong Character...";
                                }
                                else
                                    cout << "\nOh NO! You Entered Wrong Character...";
                            }
                            else
                                cout << "\nOh NO! You Entered Wrong Character...";
                        }
                        else
                            cout << "\nOh No! You Entered Wrong Character... ";
                    }
                    else
                        cout << "\nOh No! You Entered Wrong Character... ";
                }
                else
                    cout << "\nOh No! You Entered Wrong Character... ";
        }
        else
            cout << "\nOh No! You Entered Wrong Character... ";
    }
    else
        cout << "\nOh No! You Entered Wrong Character... ";
    return 0;
}

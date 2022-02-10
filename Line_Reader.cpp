#include <iostream>

using namespace std;
int main()
{
    cout << "\n\t------ LINE READER -------\n\n";
    cout << "Enter text upto 1000 characters\n";

    char character;
    int row = 0, j=1, counter=0;
    char buffer[1000];
    char* lines[100];

    lines[0] = &buffer[0];

    while((character = getchar()) != EOF)
    {
        if(row == 1000)
            break;
        if(character == '\n')
        {
            character = '\0';
            lines[j++] = &buffer[row + 1];
            counter++;
        }

        buffer[row++] = character;
    }
    buffer[row] = '\0';

    cout << "\n\nThe Lines in Reverse Order are: \n\n"

    for(int m = counter; m >=0; m--)
    {
        cout << lines[m] << "\n";
    }

}

#include <iostream>
#include <stdio.h>

using namespace std;

int str[1000], i = 0;

int main()
{

    int ch = 0, j;

    cout << "\n-------------------------\n\n";

    cout << "Type your massage :-- ";

    while (1)
    {
        ch = getchar();
        if (ch != 10)
        {
            str[i] = ch + 7;
            i++;
         }

        else
            break;
    }

    cout << "\n";

    cout << "Incripted massage :-- ";

    for (j = 0; j < i; j++)
    {
        putchar(str[j]);
    }

    cout << "\n\n";

    cout << "Decripted masssage :-- ";

    for (j = 0; j < i; j++)
    {
        str[j] = str[j] - 7;
        putchar(str[j]);
    }

    cout << "\n\n";

    cout << "-------------------------\n\n";
}

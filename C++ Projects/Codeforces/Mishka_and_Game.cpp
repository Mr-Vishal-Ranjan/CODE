#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, c, count = 0, t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> m >> c;

        if (m > c)
        {
            count++;
        }

        else if (c > m)
        {
            count--;
        }
    }

    if (count > 0)
    {
        cout << "Mishka";
    }

    else if (count < 0)
    {
        cout << "Chris";
    }

    else
    {
        cout << "Friendship is magic!^^";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int u = 0, l = 0, x;

    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        if ((int)a[i] < 91)
        {
            u++;
        }

        else
            l++;
    }

    if (l >= u)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if ((int)a[i] < 97)
            {
                a[i] += 32;
            }
        }
        cout << a;
    }

    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if ((int)a[i] > 90)
            {
                a[i] -= 32;
            }
        }
        cout << a;
    }
}
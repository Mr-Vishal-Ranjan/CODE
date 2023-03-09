#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;

    cin >> n;

    int p[n], y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];

        if (p[i] == n)
        {
            count = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> y[i];

        if (y[i] == n)
        {
            count = 1;
        }
    }

    if (count == 1)
    {
        cout << "I become the guy.";
    }

    else
    {
        cout << "Oh, my keyboard!";
    }
}
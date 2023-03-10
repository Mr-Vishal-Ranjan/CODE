#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;

    string a;

    cin >> x >> a;

    if (x < 26)
    {
        cout << "NO";
        exit(0);
    }

    for (int j = 65; j < 91; j++)
    {
        for (int i = 0; i < x; i++)
        {
            if ((int)a[i] == j || (int)a[i] == j + 32)
            {
                if (j == 90)
                {
                    cout << "YES";
                    exit(0);
                }

                else
                    break;
            }

            else
            {
                if (i == x - 1)
                {
                    cout << "NO";
                    exit(0);
                }
            }
        }
    }
    cout << "NO";
}
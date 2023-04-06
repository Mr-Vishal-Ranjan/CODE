#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, s;

    cin >> x >> s;

    string a;

    cin >> a;

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (a[j] == 'B' && a[j + 1] == 'G')
            {
                a[j] = 'G';
                a[j + 1] = 'B';
                j++;
            }
        }
    }

    cout << a;
}
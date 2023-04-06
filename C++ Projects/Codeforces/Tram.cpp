#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, a, b, total = 0, c = 0;

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> a;
        total -= a;
        cin >> b;
        total += b;

        if (total > c)
        {
            c = total;
        }
    }
    cout << c;
}
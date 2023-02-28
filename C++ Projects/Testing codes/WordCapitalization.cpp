#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int x = (int)a[0];

    if (x > 90)
    {
        x -= 32;

        a[0] = x;
    }

    cout << a;
}
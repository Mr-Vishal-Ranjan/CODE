#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, s, g;

    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        g = a;
    }

    if (b > a && b > c)
    {
        g = b;
    }

    if (c > a && c > b)
    {
        g = c;
    }

    if (a < b && a < c)
    {
        s = a;
    }

    if (b < a && b < c)
    {
        s = b;
    }

    if (c < a && c < b)
    {
        s = c;
    }

    int avg = (g + s) / 2;

    int sum = 0;

    sum = (g - avg) + (avg - s);

    cout << sum;
}
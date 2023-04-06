#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, count = 0;

    cin >> x;

    while (x >= 100)
    {
        count = count + (x / 100);
        x %= 100;
    }

    while (x >= 20)
    {
        count = count + (x / 20);
        x %= 20;
    }

    while (x >= 10)
    {
        count = count + (x / 10);
        x %= 10;
    }

    while (x >= 5)
    {
        count = count + (x / 5);
        x %= 5;
    }

    if (x < 5)
    {
        count += x;
    }

    cout << count;
}
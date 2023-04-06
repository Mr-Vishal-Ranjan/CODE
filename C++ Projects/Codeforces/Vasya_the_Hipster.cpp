#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, sum, count = 0;

    cin >> a >> b;

    if (a > b)
    {
        sum = (2 * a) - (2 * b);
        count += (2 * b);
    }

    else
    {
        sum = (2 * b) - (2 * a);
        count += (2 * a);
    }

    cout << count / 2 << " ";

    cout << (sum / 2) / 2;
}
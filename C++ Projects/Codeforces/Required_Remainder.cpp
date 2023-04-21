#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long x, y, n;
        cin >> x >> y >> n;
        int num = n / x;
        int sum = (num * x) + y;
        if (sum > n)
        {
            cout << ((num - 1) * x) + y << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}
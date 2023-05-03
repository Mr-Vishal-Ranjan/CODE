#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long sum = 0, n;

        cin >> n;

        string a;
        cin >> a;

        long long x = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            int bn = a[i] - '0';

            sum += (bn * x);
            x *= 2;
        }

        cout << sum << endl;
    }
}
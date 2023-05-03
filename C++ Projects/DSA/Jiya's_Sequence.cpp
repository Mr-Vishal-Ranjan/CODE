#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x = 1, n;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            x *= temp;
        }

        if (x % 10 == 2 || x % 10 == 3 || x % 10 == 5)
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }
}
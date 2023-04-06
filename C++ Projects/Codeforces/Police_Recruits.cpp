#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, sum = 0, count = 0;

    cin >> n;

        for (int i = 0; i < n; i++)
    {
        cin >> x;

        x = sum + x;

        if (x < 0)
        {
            count++;
        }

        else
        {
            sum = x;
        }
    }

    cout << count;
}
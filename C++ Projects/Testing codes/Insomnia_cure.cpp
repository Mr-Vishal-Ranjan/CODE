#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    int arr[d];

    for (int i = 0; i <= d; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < d; i++)
    {
        if (arr[i] % k == 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (arr[i] % l == 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (arr[i] % m == 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (arr[i] % n == 0)
        {
            arr[i] = 0;
        }
    }

    int count = 0;

    for (int i = 0; i < d; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    int i = 0, j = 1, x;

    if (n % 2 == 0)
    {
        x = n / 2;
    }

    else
    {
        x = (n / 2) + 1;
    }

    while (j <= n)
    {
        if (j % 2 != 0)
        {
            arr[i] = j;
            i++;
        }

        else
        {
            arr[x] = j;
            x++;
        }

        j++;
    }

    cout << arr[k - 1];
}
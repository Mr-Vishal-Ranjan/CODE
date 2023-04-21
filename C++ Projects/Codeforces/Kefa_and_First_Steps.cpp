#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n = 1, count = 1;

    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (arr[i] <= arr[i + 1] && i != t - 1)
        {
            count++;
        }

        else
        {
            count = 1;
        }

        if (count > n)
        {
            n = count;
        }
    }

    if (n != 1)
    {
        cout << n;
    }

    else
    {
        cout << "1";
    }
}
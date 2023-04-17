#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n = 0, count = 0;

    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            count++;
        }

        else
        {
            count = 0;
        }

        if (count > n)
        {
            n = count;
        }
    }

    if (n != 0)
    {
        cout << n + 1;
    }

    else
    {
        cout << "0";
    }
}
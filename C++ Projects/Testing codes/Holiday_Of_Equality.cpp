#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l = 0, sum = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > l)
        {
            l = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < l)
        {
            sum = (l - arr[i]) + sum;
        }
    }

    cout << sum;
}
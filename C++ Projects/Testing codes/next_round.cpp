#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, count = 0;

    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[x - 1] != 0)
        {
            if (arr[i] >= arr[x - 1])
            {
                count++;
            }
        }

        else
        {
            if (arr[i] > arr[x - 1])
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}
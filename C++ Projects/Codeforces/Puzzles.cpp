#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int x, y;

    if (arr[0] > arr[1])
    {
        x = arr[0];
        y = arr[1];
    }

    else
    {
        x = arr[1];
        y = arr[0];
    }

    if (n < m)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > x)
            {
                x = arr[i];
            }

            else if (arr[i] < y)
            {
                y = arr[i];
            }
        }
    }

    else
    {
        for (int i = 0; i < m; i++)
        {
            if (arr[i] > x)
            {
                x = arr[i];
            }

            else if (arr[i] < y)
            {
                y = arr[i];
            }
        }
    }

    if(x - y != 1) 
    cout << x - y;

    else
    cout << "0";
}
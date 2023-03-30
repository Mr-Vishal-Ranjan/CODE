#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, x = 0, y = 0;

        cin >> n;

        int a = 0, b = n / 2;

        int arr[n];

        for (int z = 1; z <= n; z++)
        {
            if (z % 2 == 0)
            {
                arr[a] = z;
                a++;
            }

            else
            {
                arr[b] = z;
                b++;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j < n / 2)
            {
                x += arr[j];
            }

            else
            {
                y += arr[j];
            }
        }

        if (x > y)
        {
            arr[n - 1] += (x - y);

            if (arr[n - 1] % 2 != 0)
            {
                cout << "YES" << endl;
                for (int j = 0; j < n; j++)
                {
                    cout << arr[j] << " ";
                }
                cout << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }

        if (y > x)
        {
            arr[n - 1] += (y - x);

            if (arr[n - 1] % 2 != 0)
            {
                cout << "YES" << endl;
                for (int j = 0; j < n; j++)
                {
                    cout << arr[j] << " ";
                }
                cout << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
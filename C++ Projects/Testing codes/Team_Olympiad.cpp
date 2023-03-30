#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0, y = 0, z = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            x++;
        }

        else if (arr[i] == 2)
        {
            y++;
        }

        else if (arr[i] == 3)
        {
            z++;
        }
    }

    if ((x < y) || (x == y) && (x < z) || (x == z))
    {
        cout << x << endl;
        int arr1[x][3];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i] == 1)
                {
                    arr1[i][j] = i + 1;
                }

                else if (arr[i] == 2)
                {
                    arr1[i][j] = i + 2;
                }

                else if (arr[i] == 3)
                {
                    arr1[i][j] = i + 3;
                }
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
    }

    else if ((y < x) || (y == x) && (y < z) || (y == z))
    {
        cout << y << endl;
        int arr1[y][3];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i] == 1)
                {
                    arr1[i][j] = i + 1;
                }

                else if (arr[i] == 2)
                {
                    arr1[i][j] = i + 2;
                }

                else if (arr[i] == 3)
                {
                    arr1[i][j] = i + 3;
                }
            }
        }
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
    }

    else if ((z < y) || (z == y) && (z < x) || (z == x))
    {
        cout << z << endl;
        int arr1[z][3];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i] == 1)
                {
                    arr1[i][j] = i + 1;
                }

                else if (arr[i] == 2)
                {
                    arr1[i][j] = i + 2;
                }

                else if (arr[i] == 3)
                {
                    arr1[i][j] = i + 3;
                }
            }
        }
        for (int i = 0; i < z; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
    }
}
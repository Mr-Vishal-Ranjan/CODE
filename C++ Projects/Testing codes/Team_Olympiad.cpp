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

    if ((x < y || x == y) && (x < z || x == z))
    {
        if (x == 0)
        {
            cout << x ;
            exit(0);
        }
        
        cout << x << endl;
        int arr1[x][3];

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    if (arr1[i][0] < 0 || arr1[i][0] > 1000)
                    {
                        arr1[i][0] = j + 1;
                        arr[j] = 0;
                    }
                }

                else if (arr[j] == 2)
                {
                    if (arr1[i][1] < 0 || arr1[i][1] > 1000)
                    {
                        arr1[i][1] = j + 1;
                        arr[j] = 0;
                    }
                }

                else if (arr[j] == 3)
                {
                    if (arr1[i][2] < 0 || arr1[i][2] > 1000)
                    {
                        arr1[i][2] = j + 1;
                        arr[j] = 0;
                    }
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

    else if ((y < x || y == x) && (y < z || y == z))
    {
        if (y == 0)
        {
            cout << y;
            exit(0);
        }
        cout << y << endl;
        int arr1[y][3];

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    if (arr1[i][0] < 0 || arr1[i][0] > 1000)
                    {
                        arr1[i][0] = j + 1;
                        arr[j] = 0;
                    }
                }

                else if (arr[j] == 2)
                {
                    if (arr1[i][1] < 0 || arr1[i][1] > 1000)
                    {
                        arr1[i][1] = j + 1;
                        arr[j] = 0;
                    }
                }

                else if (arr[j] == 3)
                {
                    if (arr1[i][2] < 0 || arr1[i][2] > 1000)
                    {
                        arr1[i][2] = j + 1;
                        arr[j] = 0;
                    }
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

    else if ((z < y || z == y) && (z < x || z == x))
    {
        if (z == 0)
        {
            cout << z;
            exit(0);
        }
        cout << z << endl;
        int arr1[z][3];

        for (int i = 0; i < z; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    if (arr1[i][0] < 0 || arr1[i][0] > 1000)
                    {
                        arr1[i][0] = j + 1;
                        arr[j] = 0;
                    }
                }

                else if (arr[j] == 2)
                {
                    if (arr1[i][1] < 0 || arr1[i][1] > 1000)
                    {
                        arr1[i][1] = j + 1;
                        arr[j] = 0;
                    }
                }

                else if (arr[j] == 3)
                {
                    if (arr1[i][2] < 0 || arr1[i][2] > 1000)
                    {
                        arr1[i][2] = j + 1;
                        arr[j] = 0;
                    }
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
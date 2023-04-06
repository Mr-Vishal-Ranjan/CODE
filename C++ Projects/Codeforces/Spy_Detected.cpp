#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] != arr[j + 1] && arr[j] == arr[j + 2])
            {
                cout << j + 2 << endl;
                break;
            }

            if (arr[j] != arr[j + 2] && arr[j] == arr[j + 1])
            {
                cout << j + 3 << endl;
                break;
            }

            if (arr[j] != arr[j + 2] && arr[j] != arr[j + 1])
            {
                cout << j + 1 << endl;
                break;
            }
        }
    }
}
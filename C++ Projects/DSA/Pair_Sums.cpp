#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;

    cin >> n >> s;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == s && i != j)
            {
                cout << "YES";
                exit(0);
            }
        }
    }

    cout << "NO";
}
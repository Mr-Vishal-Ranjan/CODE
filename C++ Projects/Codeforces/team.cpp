#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    int arr[3];

    cin >> n;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] + arr[1] + arr[2] >= 2)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0, count = 0, x = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sum / 2)
        {
            cout << "1";
            exit(0);
        }

        else if (x <= sum / 2)
        {
            x += arr[i];
            count++;
        }

        else
            break;
    }

    cout << count;
}
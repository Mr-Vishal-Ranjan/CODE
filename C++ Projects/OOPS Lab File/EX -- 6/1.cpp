#include <bits/stdc++.h>

using namespace std;

int max(int arr[])
{
    int i = 0, j = 2, max = 0;

    while (i < j)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[j] > max)
        {
            max = arr[j];
        }
        i++;
        j--;
    }

    return max;
}

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    cout << max(arr);
}
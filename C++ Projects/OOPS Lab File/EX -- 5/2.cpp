#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];
    cout << "Enter four numbers ";

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 3, max = 0;

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
    cout << max;
}
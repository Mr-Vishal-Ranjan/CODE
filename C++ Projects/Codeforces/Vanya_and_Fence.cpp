#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, h, w = 0;

    cin >> x >> h;

    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        if (arr[i] > h)
        {
            w += 2;
        }

        else
        {
            w++;
        }
    }
    cout << w ;
}
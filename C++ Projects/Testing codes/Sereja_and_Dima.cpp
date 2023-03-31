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

    int s = 0, d = 0, a = 0, b = n - 1, c = 1;

    while (a <= b)
    {
        int temp;
        if (arr[a] > arr[b])
        {
            temp = arr[a];
            a++;
        }

        else
        {
            temp = arr[b];
            b--;
        }

        if (c % 2 == 0)
        {
            d += temp;
            
        }

        else
            s += temp;
            
        c++;
    }
    cout << s << " " << d;
}
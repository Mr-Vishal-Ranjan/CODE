#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000], n = 1, t;

    for (int i = 0; i < 1000;)
    {
        if (n % 3 != 0 && (n - 3) % 10 != 0)
        {
            arr[i] = n;
            i++;
        }

        n++;
    }

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << arr[n - 1] << endl;
    }
}
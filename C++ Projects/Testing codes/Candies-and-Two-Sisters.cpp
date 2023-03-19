#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> n;

        if (n % 2 == 0)
        {
            n = (n / 2) - 1;
        }

        else
        {
            n = n / 2;
        }

        cout << n << endl;
    }
}
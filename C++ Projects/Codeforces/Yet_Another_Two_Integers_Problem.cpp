#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> a >> b;

        if (a > b)
        {
            x = a - b;
        }

        else
        {
            x = b - a;
        }

        while (x != 0)
        {
            if (x > 10)
            {
                count = x / 10;
                x %= 10;
            }

            else
            {
                count++;
                x = 0;
            }
        }

        cout << count << endl;
    }
}
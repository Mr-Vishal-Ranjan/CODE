#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r, i = 1;

    cin >> k >> r;

    while (1)
    {
        if ((k * i) % 10 == 0 || ((k * i) - r) % 10 == 0)
        {
            cout << i;
            break;
        }

        i++;
    }
}
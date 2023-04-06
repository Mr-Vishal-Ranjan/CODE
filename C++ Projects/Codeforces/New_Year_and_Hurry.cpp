#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int sum = 240 - k;

    for (int i = 1; i <= n + 1; i++)
    {
        sum = sum - (5 * i);
        if (sum < 0 || i == n + 1)
        {
            cout << i - 1;
            break;
        }
    }
}
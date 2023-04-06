#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0, count = 0;

    cin >> n;

    while (s < n)
    {
        s = s + 5;
        count++;
    }

    cout << count;
}
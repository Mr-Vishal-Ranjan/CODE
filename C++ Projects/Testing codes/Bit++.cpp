#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, n;
    string a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "X++")
        {
            x++;
        }

        else if (a == "++X")
        {
            ++x;
        }

        else if (a == "X--")
        {
            x--;
        }

        else if (a == "--X")
        {
            --x;
        }
    }

    cout << x;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;

        if ((x[0] == 'y' || x[0] == 'Y') && (x[1] == 'e' || x[1] == 'E') && (x[2] == 's' || x[2] == 'S'))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
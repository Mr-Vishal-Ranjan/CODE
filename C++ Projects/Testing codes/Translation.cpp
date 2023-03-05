#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    int j = b.size() - 1;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[j])
        {
            --j;
        }

        else
        {
            cout << "NO";
            exit(0);
        }
    }

    cout << "YES";
}
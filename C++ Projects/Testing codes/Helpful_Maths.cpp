#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    cin >> a;
    sort(a.begin(), a.end());

    for (int i = a.size() / 2; i < a.size(); i++)
    {
        cout << a[i];

        if (i != a.size() - 1)
        {
            cout << "+";
        }
    }

    return 0;
}
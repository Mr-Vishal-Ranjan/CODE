#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int count = 1;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }

        else
        {
            count = 1;
        }

        if (count >= 7)
        {
            cout << "YES";
            exit(0);
        }
    }

    cout << "NO";
}
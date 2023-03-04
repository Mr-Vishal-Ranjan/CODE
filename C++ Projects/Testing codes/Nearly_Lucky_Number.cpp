#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    int count = 0;

    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '7' || a[i] == '4')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}
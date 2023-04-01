#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int i = 0;

    while (i < a.size())
    {
        if (a[i] == '.')
        {
            cout << "0";
            i++;
        }

        else
        {
            if (a[i] == '-' && a[i + 1] == '.')
            {
                cout << "1";
                i += 2;
            }

            else
            {
                cout << "2";
                i += 2;
            }
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string b;

    cin >> a;

    cin >> b;

    int x, y;

    for (int i = 0; i < a.size(); i++)
    {
        x = (int)a[i];
        y = (int)b[i];

        if (x > 90)
        {
            x -= 32;
        }
        if (y > 90)
        {
            y -= 32;
        }

        if (x == y)
        {
            continue;
        }

        if (x > y)
        {
            cout << "1";
            exit(0);
        }
        if (x < y)
        {
            cout << "-1";
            exit(0);
        }
    }
    
    cout << "0" ;
    
}
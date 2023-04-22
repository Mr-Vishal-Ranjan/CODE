#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            i += 2;
            if (n != 0)
            {
                cout << " ";
            }
        }
        else
        {
            cout << a[i];
            n++;
        }
    }
}

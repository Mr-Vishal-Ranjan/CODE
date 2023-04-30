#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);

    for (int i = 0; i < a.size(); i++)
    {
        if ((int)a[i] != 32)
            a[i] = (int)a[i] - 32;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if ((int)a[i] == 32)
            cout << endl;

        else
            cout << a[i];
    }
}

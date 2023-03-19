#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c;
    int count = 0;
    int arr[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int arrr[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cin >> a >> b >> c;

    for (int i = 0; i < a.size(); i++)
    {
        arr[(int)a[i] - 65]++;
    }

    for (int i = 0; i < b.size(); i++)
    {
        arr[(int)b[i] - 65]++;
    }

    for (int i = 0; i < c.size(); i++)
    {
        arrr[(int)c[i] - 65]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != arrr[i])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
}
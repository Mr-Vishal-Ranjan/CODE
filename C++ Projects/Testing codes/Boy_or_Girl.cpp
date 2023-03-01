#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int count = 0;

    for (int i = 97; i <= 122; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if ((int)a[j] == i)
            {
                count++;
                break;
            }
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }

    else
        cout << "IGNORE HIM!";
}
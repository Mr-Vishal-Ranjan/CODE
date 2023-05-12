#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int flag = 0;
        string a;
        cin >> a;

        for (int j = 0; j < a.size(); j++)
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (a[j] == a[i] && j != i)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            cout << "No" << endl;
        }

        else
        {
            cout << "Yes" << endl;
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        for (int j = 0; j < a.size(); j++)
        {

            cout << a[j];
            j++;

            if (j == a.size() - 1)
            {
                cout << a[j];
            }
        }
        cout << endl;
    }
}
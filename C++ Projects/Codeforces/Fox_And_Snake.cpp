#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, a = 3;

    cin >> x >> y;

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            if (a == 3)
            {
                for (int j = 0; j < y - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";

                a = 0;
            }

            else
            {
                cout << "#";

                for (int j = 0; j < y - 1; j++)
                {
                    cout << ".";
                }

                a = 3;
            }
        }

        else
        {
            for (int j = 0; j < y; j++)
            {
                cout << "#";
            }
        }

        cout << endl;
    }
}
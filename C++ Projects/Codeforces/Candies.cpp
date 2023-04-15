#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int c, count = 1;
        cin >> c;

        if (c % 2 == 0 )
        {
            cout << "-1" << endl;
        }

        else
        {
            while (c != 1 && c != 3)
            {
                c /= 2;
                count++;
            }
            
            if (c == 1)
            {
                cout << count - 1 << endl;
                cout << "2"<< " ";
                for (int j = 0; j < count - 2; j++)
                {
                    cout << "1"<< " ";
                }

                cout << endl;
            }

            else
            {
                cout << count << endl;
                cout << "2"<< " ";
                for (int j = 0; j < count - 1; j++)
                {
                    cout << "2"<< " ";
                }

                cout << endl;
            }
        }
    }
}
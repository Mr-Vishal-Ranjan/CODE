#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, count = 0 , y = 0 ;
    cin.ignore();
    string a;

    cin >> a;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if ((int)a[j] == i)
            {
                count++;
                x = count;
                if (x > y)
                {
                    y = x ;
                }
                
            }

            else
                count = 0;

        }
    }

    cout << y - 1;
}
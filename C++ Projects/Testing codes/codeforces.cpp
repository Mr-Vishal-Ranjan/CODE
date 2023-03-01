#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, count = 0, y = 0, n;
    cin >> n;
    string a;

    cin >> a;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                x = count;

                if (x > 1)
                {
                    y = x - 1;
                }
            }

            else
            {
                count = 0 ;
            }
        }
        
        
    }

    cout << y ;
}

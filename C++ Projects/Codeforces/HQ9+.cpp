#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    int i = 0 ;
    //for (int i = 0; i < a.size(); i++)
    //{
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9' )
        {
            cout << "YES";
            exit(0);
        }
    //}
    cout << "NO";
}
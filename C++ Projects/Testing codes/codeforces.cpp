#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100];
    string b;

     cin >> a;
    

    for (int j = 0; j < 100; j++)
    {
        if (a[j] != '\000')
        {
            cout << a[j] ;
        }

        else
            break;
        
    }
    
    //cout << a;


    return 0;
}
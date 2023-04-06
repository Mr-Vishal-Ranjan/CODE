#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a ;
    int count = 0 ;
    
    getline(cin, a);
    
    for (int i = 97; i < 123; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if ((int)a[j] == i)
            {
                count++ ;
                break ;
            }
            
        }
        
    }

    cout << count ;
    
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x ;

    int arr[4] ;

    cin >> x ;

    for (int i = 0; i < 4; i++)
    {
        arr[4 - i] = x % 10 ;
        x /= 10 ;
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if ( arr[i] != arr[j])
            {
                
            }
            
        }
        
    }
    
}
#include <iostream>

using namespace std ;

int main()
{

    int arr1[] {1,4,2,3} ;
    int arr2[] {4,5,7} ;
    
    int a = (sizeof(arr1) / sizeof(arr1[0])) ;
    int b = (sizeof(arr2) / sizeof(arr2[0])) ;
    int n = a * b ;
    int arr3[n];
    int i = 0 , j = 0 , z = 0 ;

    int *arr = new int(n) ;
    // int af = (sizeof(arr) / sizeof(arr[0]));

    for (i = 0; i < a ; i++)
    {
        for (j = 0; j < b ; j++)
        {   
            arr3[z] = arr1[i] * arr2[j] ; 
            z++ ;
        }    
    }

    for ( z = 0; z < n ; z++)
    {
        cout << arr3[z] << " " ;
    }
    

    return 0;
}
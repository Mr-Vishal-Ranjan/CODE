#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3] = {8, 9, 10};
    int arr1[3] = {1, 2, 3};
    int final[6];

    int i = 0;
    int j = 0, k = 0;

    while (i < 3 && j < 3)
    {
        if (arr[i] > arr1[j])
        {
            final[k] = arr1[j];
            j++;
            k++;
        }

        else
        {
            final[k] = arr[i];
            i++, k++;
        }
    }

    while (i < 3)
    {
        final[k] = arr[i];
        i++, k++;
    }

    while (j < 3)
    {
        final[k] = arr1[j];
        j++;
        k++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << final[i] << " ";
    }
    
}
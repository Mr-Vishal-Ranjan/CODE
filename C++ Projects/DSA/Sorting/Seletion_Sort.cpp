#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        int v = 0;
        temp = i;
        for (int j = i; j < 5; j++)
        {

            if (a[temp] > a[j])
            {
                temp = j;
                v = 1;
            }
        }

        if (v = 1)
        {
            swap(a[i], a[temp]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
}
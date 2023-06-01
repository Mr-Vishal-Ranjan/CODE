#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = i;
        for (int j = i; j < 5; j++)
        {

            if (a[temp] > a[j])
            {
                temp = j;
            }
        }

        swap(a[i], a[temp]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
}
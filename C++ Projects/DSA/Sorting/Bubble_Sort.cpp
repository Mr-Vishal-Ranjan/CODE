#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[j] > a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
}
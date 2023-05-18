#include <bits/stdc++.h>

using namespace std;

void fun(int array[5], int s, int e);

void merge(int final[5], int m, int st, int ed);

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = 5;

    fun(arr, start, end);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

void fun(int array[], int s, int e)
{
    int mid = (s + e) / 2;

    if (s == e)
        return;

    fun(array, s, mid);

    fun(array, mid + 1, e);

    merge(array, mid, s, e);
}

void merge(int final[], int m, int st, int ed)
{
    int i = st, j = m + 1, k = 0;

    while (i < m && j < ed)
    {
        if (final[i] > final[j])
        {
            final[k] = final[j];
            j++;
            k++;
        }

        else
        {
            final[k] = final[i];
            i++;
            k++;
        }
    }

    while (i < m)
    {
        final[k] = final[i];
        i++;
        k++;
    }

    while (j < ed)
    {
        final[k] = final[j];
        j++;
        k++;
    }

    for (int i = 0; i < 5; i++)
    {
        final[i] = final[i];
    }
}
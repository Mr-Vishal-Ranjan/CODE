#include <bits/stdc++.h>

using namespace std;

void fun(int array[], int s, int e);

void merge(int final[], int m, int st, int ed);

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = 5;

    fun(arr, start, end - 1);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

void fun(int array[], int s, int e)
{
    if (s < e)
    {
        // return;

        int mid = s + (e - s) / 2;
        fun(array, s, mid);

        fun(array, mid + 1, e);

        merge(array, mid, s, e);
    }
}

void merge(int final[], int m, int st, int ed)
{
    int i, j, k;
    int x = m - st + 1, y = ed - m;

    int l[x], r[y];

    for (int i = 0; i < x; i++)
    {
        l[i] = final[st + i];
    }

    for (int i = 0; i < y; i++)
    {
        r[i] = final[m + 1 + i];
    }

    i = 0;
    j = 0;
    k = st;

    while (i < x && j < y)
    {
        if (l[i] >= r[j])
        {
            final[k] = r[j];
            j++;
        }

        else
        {
            final[k] = l[i];
            i++;
        }
        k++;
    }

    while (i < x)
    {
        final[k] = l[i];
        i++;
        k++;
    }

    while (j < y)
    {
        final[k] = r[j];
        j++;
        k++;
    }
}
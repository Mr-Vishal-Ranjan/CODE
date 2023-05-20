#include <bits/stdc++.h>

using namespace std;

int v[10000000];

void fun(int array[], int s, int e);

void merge(int final[], int m, int st, int ed);

int main()
{
    int size;
    long long sum;

    cin >> size >> sum;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        v[arr[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (v[sum - arr[i]] != 0 && (arr[i] != sum - arr[i] || v[sum - arr[i]] > 1))
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}

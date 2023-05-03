#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[c];
    int num = 1, count = 0;

    while (count != c)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            arr[count] = num;
            count++;
        }
        num++;
    }
    int x = arr[c - 1];
    while (x > -1)
    {
        cout << x << " ";
        x -= (a * b);
    }
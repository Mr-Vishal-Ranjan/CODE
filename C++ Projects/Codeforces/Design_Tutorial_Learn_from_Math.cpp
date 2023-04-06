#include <bits/stdc++.h>

using namespace std;

bool checkComposite(int num)
{
    int count = 0;
    for (int j = 1; j <= num / 2; j++)
    {
        if (num % j == 0)
        {
            count++;
        }
    }
    return count > 1;
}

int main()
{
    int n, x = 0;

    cin >> n;

    int arr[n];

    for (int i = 4; i <= n; i++)
    {
        if (checkComposite(i))
        {
            if (checkComposite(n - i))
            {
                cout << i << " " << n - i;
                break;
            }
        }
    }
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    int sum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if ((int)a[i] < 91)
        {
            sum -= ((int)a[i] + 32);
        }

        else
        {
            sum += ((int)a[i] - 32);
        }
    }
    sum = abs(sum);
    for (int i = 2; i <= sum / 2; i++)
    {
        if (sum % i == 0)
        {
            cout << "0";
            exit(0);
        }
    }
    cout << "1";
}
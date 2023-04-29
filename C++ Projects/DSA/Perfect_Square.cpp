#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, half;
    cin >> num;

    half = num / 2;

    int start = 1, mid, end = half;

    while (start - end != -1 && start - end != 1)
    {
        mid = (start + end) / 2;

        if (start * start == num)
        {
            cout << start;
            break;
        }

        if (end * end == num)
        {
            cout << end;
            break;
        }

        if (mid * mid > num)
        {
            end = mid;
        }

        else if (mid * mid < num)
        {
            start = mid;
        }

        else if (mid * mid == num)
        {
            cout << mid;
            break;
        }
    }
}
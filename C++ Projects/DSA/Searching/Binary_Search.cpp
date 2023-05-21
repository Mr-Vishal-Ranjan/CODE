#include <bits/stdc++.h>

using namespace std;

int binary_search(int array[], int start, int end, int t);

int main()
{
    int array[5], target;

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    cin >> target;

    int start = 0, end = 5;

    int index = binary_search(array, start, end - 1, target);

    if (index != -1)
    {
        cout << "Target found on Index " << index;
    }

    else
    {
        cout << "Target not found";
    }
}

int binary_search(int array[], int start, int end, int t)
{

    while (start < end)
    {
        int mid = start + end / 2;

        if (array[mid] == t)
        {
            return mid;
        }

        if (array[mid] < t)
        {
            start = mid;
        }

        else
        {
            end = mid;
        }
    }

    return -1;
}
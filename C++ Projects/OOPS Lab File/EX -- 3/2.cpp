#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 1;

    while (num < 11)
    {
        cout << num;
        for (int i = 1; i < num / 2; i++)
        {
            if (i * i == num)
            {
                cout << " -> Sqaure Root is " << i;
            }

            if (i * i * i == num)
            {
                cout << " -> Cube Root is " << i;
            }
        }
        cout<<endl;
        num++;
    }
}
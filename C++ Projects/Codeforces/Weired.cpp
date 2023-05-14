#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x ;
    cin >> x;

    if(x > 1 && x < 6 && x % 2 == 0)
    {
        cout << "Not Weired";
    }

    else if (x > 5 && x < 21 && x % 2 == 0)
    {
        cout << "Weired";
    }

    else if(x > 20)
    {
        cout << "Not Weired";
    }

    else if (x % 2 != 0)
    {
        cout << "Weired";
    }
}
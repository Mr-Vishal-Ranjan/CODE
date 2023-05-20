#include <bits/stdc++.h>

using namespace std;

void print(int x);

int main()
{
    int n;
    cin >> n;

    print(n);
}

void print(int x)
{
    if (x--)
    {
        cout << x << " Hello World!" << endl;
        print(x);
    }
}
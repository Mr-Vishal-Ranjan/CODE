#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num=1;

    do
    {
        int fact=1;
        for (int i = 1; i < num; i++)
        {
            fact*=i;
        }
        cout<<"Factorial of "<<num<<" is "<<fact<<endl;
        num++;
    } while (num<11);
    
}
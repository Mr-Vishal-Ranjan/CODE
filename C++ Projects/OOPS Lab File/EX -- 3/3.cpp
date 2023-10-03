#include <bits/stdc++.h>

using namespace std;

int main()
{
    float fact,count=1,sum=1;
    while (count<11)
    {
        fact=1;
        for (int i = 1; i <= count; i++)
        {
            fact*=i;
        }
        sum+=1/fact;
        //cout<<"loop"<<sum<<endl;
        count++;
    }
    cout<<sum<<endl;
    
}
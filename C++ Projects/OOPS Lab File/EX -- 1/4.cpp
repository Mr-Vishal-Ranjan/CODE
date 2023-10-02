#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a and b :- ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swaping"<<endl<<"Value of a and b is "<<a<<" and "<<b<<endl;        
}
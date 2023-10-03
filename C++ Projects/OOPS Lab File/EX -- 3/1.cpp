#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nums[4];
    int index=0,sum=0;
    while (index<4)
    {
        cout<<"Enter number :- ";
        cin>>nums[index];
        sum+=nums[index];
        index++;
    }
    cout<<"Avg of numbers is "<<sum/4<<endl;
}
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
    void sum(int a,int b){
        cout<< "Sum is " << a+b;
    }
};

int main()
{
    A obj;
    obj.sum(2,4);
}
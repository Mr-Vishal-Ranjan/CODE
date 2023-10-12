#include <bits/stdc++.h>

using namespace std;

class PrimeCheck{
    public:
    PrimeCheck(int num){
        for (int i = 2; i <= num/2; i++)
        {
            if(num%i==0){
                cout<<"Number is not Prime";
                break;
            }else
            {
                cout << "Number is Prime";
            }
            
        }
        
    }
};

int main()
{
    PrimeCheck check(6);
}
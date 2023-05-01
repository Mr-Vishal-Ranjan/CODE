#include <bits/stdc++.h>

using namespace std;

class Account
{
private:
    int balance;
    static float rate ;

public:
    void setBalance(int b)
    {
        balance = b;
    }

    static void setRate(float r)
    {
        rate = r;
    }

    static void show_rate()
    {
        cout << rate;
    }
};

float Account :: rate ;

int main()
{
    Account a1, a2;
    a1.setRate(4.5);// OR //Account :: setRate(4.5);

    a1.show_rate(); // OR //Account :: show_rate();
    a2.show_rate();
} 

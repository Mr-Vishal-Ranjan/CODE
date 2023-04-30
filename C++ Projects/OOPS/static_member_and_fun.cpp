#include <bits/stdc++.h>

using namespace std;

class account
{
private:
    int balance;
    static float rate;

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

// float account :: rate = 3.5f;

int main()
{
    account a1, a2;
    a1.setRate(4.5);
    //account :: setRate(4.5);

    a1.show_rate();
}

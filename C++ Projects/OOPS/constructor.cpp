#include <bits/stdc++.h>

using namespace std ;

class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int k)
    {
        a = k;
    }

    Complex()
    {
    }

    Complex(Complex &c)
    {
        a = c.a;
        b = c.b;
    }
};

int main()
{
    Complex c1(3, 4), c2;
    Complex c4(c1);
}
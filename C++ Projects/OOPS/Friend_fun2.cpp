#include <bits/stdc++.h>

using namespace std;

class Complex
{

private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x, b = y;
    }

    void showData()
    {
        cout << "a = " << a << " b = " << b;
    }

    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = Y.b + X.a;
    return (temp);
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(3, 4);
    c2.setData(5, 7);

    c3 = c1 + c2; // OR //c3 = operator + (c1,c2);
    c3.showData();
}
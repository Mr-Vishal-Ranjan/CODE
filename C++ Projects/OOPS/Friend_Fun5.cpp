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

    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
};

ostream &operator<<(ostream &dout, Complex c){
    cout<<"\na = "<<c.a<<" b = "<<c.b;
    return(dout);
}

istream &operator>>(istream &din, Complex &c){
    cin>>c.a>>c.b;
    return(din);
}

int main(){
    Complex c1;

    c1.setData(4,5);

    cout << "Enter a complex number\n";

    cin >> c1;

    cout <<"You entered "<< c1;

    cout << c1;
}
#include <iostream>
using namespace std;
class Number
{
private:
    double num;

public:
    Number(double num){
        this->num=num;
    }

    Number operator+(const Number &other)
    {
        Number result(num + other.num);
        return result;
    }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Number num1(3.0);
    Number num2(1.5);

    Number sum = num1 + num2;

    cout << "Sum of num1 and num2: ";
    sum.display();

    return 0;
}

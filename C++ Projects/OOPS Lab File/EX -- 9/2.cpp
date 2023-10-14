#include <iostream>
using namespace std;
class MyInteger
{
private:
    int value;

public:
    MyInteger(int val) : value(val) {}
    MyInteger &operator++()
    {
        ++value;
        return *this;
    }

    int getValue() const
    {
        return value;
    }
};

int main()
{
    MyInteger num(5);

    cout << "Original value: " << num.getValue() << endl;

    ++num;

    cout << "After pre-increment: " << num.getValue() << endl;

    return 0;
}

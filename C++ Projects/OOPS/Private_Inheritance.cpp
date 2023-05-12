#include <iostream>

class Array
{

private:
    int a[10];

public:
    void insert(int index, int value)
    {
        a[index] = value;
    }
};

class STACK : private Array
{

    int top = 0;

public:
    void push(int value)
    {
        insert(top, value);
    }
};

int main()
{
    STACK s1;
    s1.push(34); // --> Accessable
    // s1.insert(2,55); --> Not Accessable
}
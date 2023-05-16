#include <iostream>
class Car
{

public:
    void shiftGear()
    {
    }

    void f2()
    {
    }
};

class SportsCar : public Car
{

public:
    void shiftGear() // Method Overrriding
    {
    }

    void f2(int x) // Method Hiding
    {
    }
};

int main()
{

    SportsCar obj;

    obj.shiftGear();

    // obj.f2(); ERROR

    obj.f2(4); // SportsCar..
}
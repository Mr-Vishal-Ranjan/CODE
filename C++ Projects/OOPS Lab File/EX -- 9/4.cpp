#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    int result1 = calc.add(5, 7);
    int result2 = calc.add(3, 8, 2);
    double result3 = calc.add(2.5, 3.7);

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}

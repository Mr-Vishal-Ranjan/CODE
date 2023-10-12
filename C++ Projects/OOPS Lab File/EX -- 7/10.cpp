#include <iostream>
using namespace std;
class AverageCalculator
{
public:
    AverageCalculator(double a, double b, double c, double d)
        : sum(a + b + c + d), count(4) {}

    double calculateAverage()
    {
        return sum / count;
    }

private:
    double sum;
    int count;
};

int main()
{
    double num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    AverageCalculator calculator(num1, num2, num3, num4);
    double average = calculator.calculateAverage();

    cout << "Average: " << average << endl;

    return 0;
}

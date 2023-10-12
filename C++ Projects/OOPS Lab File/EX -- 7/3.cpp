#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            cerr << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
    }
};

int main()
{
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Simple Calculator\n";
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation)
    {
    case '+':
        result = calc.add(num1, num2);
        break;
    case '-':
        result = calc.subtract(num1, num2);
        break;
    case '*':
        result = calc.multiply(num1, num2);
        break;
    case '/':
        result = calc.divide(num1, num2);
        break;
    default:
        cerr << "Invalid operation." << endl;
        return 1;
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}

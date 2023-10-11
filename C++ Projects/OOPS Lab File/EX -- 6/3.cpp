#include <iostream>
using namespace std;
int sumOfThreeNumbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    int sum = sumOfThreeNumbers(num1, num2, num3);

    cout << "The sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << sum << endl;

    return 0;
}

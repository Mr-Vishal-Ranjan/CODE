#include <iostream>
using namespace std;
class NumberChecker
{
public:
    NumberChecker(int num) : number(num) {}

    bool isEvenAndGreaterThan15() const
    {
        return number > 15 && number % 2 == 0;
    }

private:
    int number;
};

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;

    NumberChecker checker(input);

    if (checker.isEvenAndGreaterThan15())
    {
        cout << "The number is even and greater than 15." << endl;
    }
    else
    {
        cout << "The number is not even or not greater than 15." << endl;
    }

    return 0;
}

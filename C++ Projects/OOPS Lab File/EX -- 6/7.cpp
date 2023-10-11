#include <iostream>
using namespace std;
int sumOfNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumOfNumbers(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        int sum = sumOfNumbers(n);
        cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;
    }

    return 0;
}

#include <iostream>

int main()
{
    int n, first = 0, second = 1, next;

    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Please enter a positive integer.";
    }
    else if (n == 1)
    {
        std::cout << "Fibonacci Series: " << first;
    }
    else if (n == 2)
    {
        std::cout << "Fibonacci Series: " << first << " " << second;
    }
    else
    {
        std::cout << "Fibonacci Series: " << first << " " << second;
        for (int i = 3; i <= n; ++i)
        {
            next = first + second;
            std::cout << " " << next;
            first = second;
            second = next;
        }
    }

    return 0;
}

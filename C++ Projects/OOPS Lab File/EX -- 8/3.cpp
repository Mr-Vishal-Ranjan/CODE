#include <iostream>
using namespace std;
class FibonacciSeries
{
private:
    int n;
    int first;
    int second;

public:
    FibonacciSeries(int count) : n(count), first(0), second(1) {}

    void generateSeries()
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                cout << first;
            else if (i == 1)
                cout << ", " << second;
            else
            {
                int next = first + second;
                cout << ", " << next;
                first = second;
                second = next;
            }
        }
        cout << endl;
    }
};

int main()
{
    int count;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> count;

    FibonacciSeries series(count);

    if (count <= 0)
    {
        cout << "Please enter a positive count." << endl;
    }
    else
    {
        cout << "Fibonacci series: ";
        series.generateSeries();
    }

    return 0;
}

#include <iostream>
using namespace std;
class EvenFinder
{
public:
    EvenFinder(int a, int b, int c, int d) : num1(a), num2(b), num3(c), num4(d) {}

    void findEvenNumbers()
    {
        if (num1 % 2 == 0)
            cout << num1 << " is even." << endl;
        if (num2 % 2 == 0)
            cout << num2 << " is even." << endl;
        if (num3 % 2 == 0)
            cout << num3 << " is even." << endl;
        if (num4 % 2 == 0)
            cout << num4 << " is even." << endl;
    }

private:
    int num1, num2, num3, num4;
};

int main()
{
    int a, b, c, d;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    EvenFinder finder(a, b, c, d);
    finder.findEvenNumbers();

    return 0;
}

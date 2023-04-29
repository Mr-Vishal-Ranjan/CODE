#include <iostream>

using namespace std;

int main()
{

    int num, rem, x, note, num0;
    x = 0;
    note = 100;

    cout << "Enter amount :- ";
    cin >> num;

    num0 = num / 100;
    x = num0;
    rem = num % 100;
    num = rem;
    cout << "\nDollars required is " << x << "\n";

    num0 = num / 25;
    x = num0;
    rem = num % 25;
    num = rem;
    cout << "\nQuatars required is " << x << "\n";

    num0 = num / 10;
    x = num0;
    rem = num % 10;
    num = rem;
    cout << "\nDime required is " << x << "\n";

    num0 = num / 5;
    x = num0;
    rem = num % 5;
    num = rem;
    cout << "\nNikels required is " << x << "\n";

    num0 = num / 1;
    x = num0;
    rem = num % 1;
    num = rem;
    cout << "\nPenny required is " << x << "\n";
}
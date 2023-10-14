#include <iostream>
using namespace std;
class MyNumber
{
private:
    int num;

public:
    MyNumber(int n) : num(n) {}
    MyNumber operator++(int)
    {
        MyNumber temp = *this;
        num++;
        return temp;
    }

    int getNumber()
    {
        return num;
    }
};

int main()
{
    MyNumber numObj(5);

    cout << "Original Number: " << numObj.getNumber() << endl;

    MyNumber result = numObj++;

    cout << "Number after post-increment: " << numObj.getNumber() << endl;
    cout << "Result of post-increment: " << result.getNumber() << endl;

    return 0;
}

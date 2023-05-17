#include <iostream>
using namespace std;
class Box
{

private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void showDimension()
    {
        cout << "\nl = " << l << " b = " << b << " h = " << h <<endl;
    }
};

int main()
{
    Box SmallBox;
    SmallBox.setDimension(12, 10, 5);
    SmallBox.showDimension();
}
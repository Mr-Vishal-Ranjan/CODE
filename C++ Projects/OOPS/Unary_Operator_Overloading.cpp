#include <bits/stdc++.h>

using namespace std;

class Integer
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << "\nx = " << x;
    }

    Integer operator++(){ // Preincrement operator
        Integer i;
        i.x = ++x;
        return(i);
    }

    Integer operator++(int){ // Postincrement operator
        Integer i;
        i.x = x++;
        return (i);
    }
};
    int main()
    {
        Integer i1 ,i2;
        i1.setData(3);
        i1.showData();
        i2 = i1++; //OR// i2 = i1.opearator++();
        i1.showData();
        i2.showData();
    }
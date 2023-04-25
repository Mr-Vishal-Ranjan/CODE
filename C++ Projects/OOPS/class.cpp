#include <bits/stdc++.h>

using namespace std;

class book

{
private:
    int bookid;
    string title;
    float price;

public:
    void input()
    {
        cin >> bookid >> title >> price;
    }

    void display()
    {
        cout << bookid << " " << title << " " << price;
    }
};

int main()
{

    book b1;
    b1.input();
    b1.display();
}

// int main()
// {
//     book b1 = {100, "vishal ranjan,200.76"};
//     book b2, b3;
//     b2.bookid = 101;
//     b2.title = "Vikash Ranjan";
//     b2.price = 345.534;

//     b3 = b2;

//     cout << b3.bookid <<endl << b3.title << endl << b3.price;
// }

#include <iostream>

using namespace std;

void usingAutomaticVariables()
{
    for (int i = 1; i <= 10; i++)
    {
        int result = i + 100;
        cout << "Using Automatic Variable: " << result << endl;
    }
}

void usingStaticVariables()
{
    static int staticResult = 0; 
    for (int i = 1; i <= 10; i++)
    {
        staticResult = i + 100; 
        cout << "Using Static Variable: " << staticResult << endl;
    }
}

int main()
{
    cout << "Displaying 1 to 10 with addition of 100 using Automatic and Static variables:" << endl;

    cout << "Using Automatic Variables:" << endl;
    usingAutomaticVariables();

    cout << "Using Static Variables:" << endl;
    usingStaticVariables();

    return 0;
}

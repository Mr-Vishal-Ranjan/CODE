#include <iostream>
#include <string>
using namespace std;
class StringConcatenator
{
private:
    string firstString;
    string secondString;

public:
    StringConcatenator(const string &str1, const string &str2) : firstString(str1), secondString(str2) {}

    string concatenateStrings()
    {
        return firstString + secondString;
    }
};

int main()
{
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    StringConcatenator concatenator(str1, str2);
    string result = concatenator.concatenateStrings();

    cout << "Concatenated string: " << result << endl;

    return 0;
}

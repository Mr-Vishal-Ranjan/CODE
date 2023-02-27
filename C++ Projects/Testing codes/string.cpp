#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string word[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin, word[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (word[j].size() > 10)
        {
            cout << word[j][0] << word[j].size() - 2 << word[j][word[j].size() - 1] << endl;
        }

        else
            cout << word[j] << endl;
    }

    return 0;
}
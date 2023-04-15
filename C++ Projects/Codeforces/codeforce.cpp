#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
    }

    int x = 0, y = 0, z = 0;

    for (int i = 0; i < n; i++)
    {
        if (student[i] == 1)
        {
            x++;
        }

        else if (student[i] == 2)
        {
            y++;
        }

        else if (student[i] == 3)
        {
            z++;
        }
    }

    int temp = 0;
    if ((x < y || x == y) && (x < z || x == z))
    {
        temp = x;
    }

    else if ((y < x || y == x) && (y < z || y == z))
    {
        temp = y;
    }

    else if ((z < y || z == y) && (z < x || z == x))
    {
        temp = z;
    }

    cout << temp << endl;

    int team[temp][3];

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (student[j] == 1)
            {
                if (team[i][0] > n || team[i][0] < 0)
                {
                    team[i][0] = j + 1;
                    student[j] = 0;
                }
            }

            if (student[j] == 2)
            {
                if (team[i][1] > n || team[i][1] < 0)
                {
                    team[i][1] = j + 1;
                    student[j] = 0;
                }
            }

            if (student[j] == 3)
            {
                if (team[i][2] > n || team[i][2] < 0)
                {
                    team[i][2] = j + 1;
                    student[j] = 0;
                }
            }
        }

        for (int j = 0; j < 3; j++)
        {
            cout << team[i][j] << " ";
        }

        cout << endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int marks;

    // Input marks from the user
    cout << "Enter the student's marks: ";
    cin >> marks;

    // Check and display the grade based on the marks
    if (marks >= 90)
    {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

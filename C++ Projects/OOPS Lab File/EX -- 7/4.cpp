#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student(const string &n, int r)
    {
        name = n;
        rollNo = r;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student student1("John", 101);
    Student student2("Alice", 102);
   
    cout << "Student 1 Information:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();

    return 0;
}

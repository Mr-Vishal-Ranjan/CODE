#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string empName, double empSalary)
    {
        name = empName;
        salary = empSalary;
    }

    double getSalary()
    {
        return salary;
    }

    void setSalary(double empSalary)
    {
        salary = empSalary;
    }

    void printSalary()
    {
        cout << name << "'s salary: " << salary << endl;
    }

    Employee operator+(const Employee &other)
    {
        Employee result("Total Salary", salary + other.salary);
        return result;
    }
};

int main()
{
    Employee emp1("Employee 1", 50000);
    Employee emp2("Employee 2", 60000);

    Employee totalSalary = emp1 + emp2;

    emp1.printSalary();
    emp2.printSalary();
    totalSalary.printSalary();

    return 0;
}

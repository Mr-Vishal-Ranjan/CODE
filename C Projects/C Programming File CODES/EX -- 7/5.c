#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    int age;
};

int main()
{
    struct Employee emp;

    // Creating the employee record
    emp.id = 1;
    sprintf(emp.name, "John Doe");
    emp.age = 30;

    // Displaying the initial employee record
    printf("Initial Employee Record:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n\n", emp.age);

    // Updating the employee record
    emp.age = 35;
    sprintf(emp.name, "Jane Smith");

    // Displaying the updated employee record
    printf("Updated Employee Record:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);

    return 0;
}

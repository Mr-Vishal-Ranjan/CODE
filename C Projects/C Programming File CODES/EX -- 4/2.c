#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Student information:\n");
    printf("Name: %s", s.name);
    printf("Roll number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

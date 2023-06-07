#include <stdio.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Entered details:\n");
    printf("Name: %s", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}

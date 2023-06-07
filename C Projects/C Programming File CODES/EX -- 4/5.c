#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    int n, i;
    struct Person *people;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n elements
    people = (struct Person *)malloc(n * sizeof(struct Person));

    if (people == NULL)
    {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Input information for each element
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for person %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", people[i].name);

        printf("Age: ");
        scanf("%d", &people[i].age);
    }

    // Display information for each element
    printf("\nEntered details for %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("\n");
    }

    // Free dynamically allocated memory
    free(people);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define note "enter the valid operation"
void addtion();
void substraction();
void multiplication();
void division();
int main()
{

    int choice, i;

    printf("\nEnter 1 for Add");
    printf("\nEnter 2 for Substract");
    printf("\nEnter 3 for Multiply");
    printf("\nEnter 4 for Divide\n");
    printf("Press 0 for exit calculator");
    // scanf("%d",&d);

    while (1)
    {
        printf("\n\t\tchoose Operation\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addtion();
        case 2:
            substraction();
        case 3:
            multiplication();
        case 4:
            division();
        default:
            printf("\n********** %s ***********\n", note);
        }
    }
    return 0;
}

void addtion()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
}

void substraction()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("%d", a - b);
}

void multiplication()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("%d", a * b);
}

void division()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("%d", a / b);
}

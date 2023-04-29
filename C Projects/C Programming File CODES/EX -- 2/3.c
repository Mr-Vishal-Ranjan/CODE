#include <stdio.h>

int main()
{
    int x, y;
    int *j, *k;
    j = &x, k = &y;

    printf("Enter two numbers :-- ");
    scanf("%d %d", &x, &y);

    printf("Sum of two numbers is %d", *j + *k);
}
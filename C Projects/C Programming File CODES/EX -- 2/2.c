#include <stdio.h>

int main()
{
    int x, y;
    int *j, *k;
    j = &x, k = &y;

    printf("Enter two numbers :-- ");
    scanf("%d %d", &x, &y);
    printf("Before swaping x = %d and y = %d\n", x, y);

    int t = *j;
    *j = *k;
    *k = t;

    printf("After swaping x = %d and y = %d", x, y);
}
#include <stdio.h>

int main()
{
    int *j, x = 5;
    j = &x;

    printf("%d", *j);
}
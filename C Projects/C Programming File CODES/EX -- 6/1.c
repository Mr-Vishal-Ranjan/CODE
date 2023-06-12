#include <stdio.h>

int isLSBSet(int num)
{
    if (num & 1)
    {
        return 1; // LSB is set
    }
    else
    {
        return 0; // LSB is not set
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isLSBSet(number))
    {
        printf("LSB is set (equal to 1)\n");
    }
    else
    {
        printf("LSB is not set (equal to 0)\n");
    }

    return 0;
}

#include <stdio.h>

int isEven(int num)
{
    // Bitwise AND operation with 1 to check the least significant bit
    if ((num & 1) == 0)
    {
        return 1; // Number is even
    }
    else
    {
        return 0; // Number is odd
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number))
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}

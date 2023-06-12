#include <stdio.h>

int isMSBSet(int num)
{
    int numBits = sizeof(int) * 8; // Number of bits in an integer

    // Left shift 1 by (numBits - 1) positions and check the value of the MSB
    if (num & (1 << (numBits - 1)))
    {
        return 1; // MSB is set
    }
    else
    {
        return 0; // MSB is not set
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isMSBSet(number))
    {
        printf("MSB is set (equal to 1)\n");
    }
    else
    {
        printf("MSB is not set (equal to 0)\n");
    }

    return 0;
}

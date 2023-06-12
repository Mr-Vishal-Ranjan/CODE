#include <stdio.h>

int countLeadingZeros(int num)
{
    int count = 0;
    int numBits = sizeof(int) * 8; // Number of bits in an integer

    // Perform a bitwise right shift until the most significant bit (MSB) is set
    while ((num & (1 << (numBits - 1))) == 0)
    {
        count++;
        num = num << 1; // Left shift the number by 1 position
    }

    return count;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int leadingZeros = countLeadingZeros(number);

    printf("Number of leading zeros: %d\n", leadingZeros);

    return 0;
}

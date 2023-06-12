#include <stdio.h>

void countZerosOnes(int num)
{
    int zeros = 0;
    int ones = 0;

    if (num == 0)
    {
        zeros = 1;
    }
    else
    {
        while (num != 0)
        {
            if (num & 1)
            {
                ones++;
            }
            else
            {
                zeros++;
            }

            num = num >> 1; // Right shift the number by 1 position
        }
    }

    printf("Number of zeros: %d\n", zeros);
    printf("Number of ones: %d\n", ones);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    countZerosOnes(number);

    return 0;
}

#include <stdio.h>

void swapNumbers(int *a, int *b)
{
    if (a != b)
    {
        *a = *a ^ *b; // XOR operation to swap values
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapNumbers(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
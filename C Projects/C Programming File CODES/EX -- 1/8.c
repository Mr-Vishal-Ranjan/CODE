#include <stdio.h>

int main()
{
    int arr[10], x = 0, y = 99999;

    printf("Enter Elements in array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
        }

        if (arr[i] < y)
        {
            y = arr[i];
        }
    }

    printf("Largest element of Array is %d \nSmallest element of Array is %d", x, y);
}
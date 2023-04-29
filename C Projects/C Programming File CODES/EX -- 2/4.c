#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter elements in array :-- ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Element is %d and its address is %d\n", arr[i], &arr[i]);
    }
}
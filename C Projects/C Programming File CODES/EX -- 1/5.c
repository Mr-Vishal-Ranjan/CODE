#include <stdio.h>

int main()
{
    int arr[10], x, n;

    printf("Enter Elements in array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element that you want to delete from Array :-- ");

    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            n = i;
        }
    }

    for (int i = n; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
}
#include <stdio.h>

int main()
{
    int arr[10], x, s;

    printf("Enter Elements in array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sort Array : \n --> Enter 1 for Ascending order \n --> Enter 2 for Descending order \n");

    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    s = arr[i];
                    arr[i] = arr[j];
                    arr[j] = s;
                }
            }
        }
    }

    else
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] < arr[j])
                {
                    s = arr[i];
                    arr[i] = arr[j];
                    arr[j] = s;
                }
            }
        }
    }

    printf("Sorted array :-- ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
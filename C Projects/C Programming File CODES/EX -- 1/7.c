#include <stdio.h>

int main()
{
    int arr[10], arr1[10], arr2[20];

    printf("Enter Elements in first array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }

    printf("Enter Elements in second array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i + 10] = arr1[i];
    }

    printf("Elements of Merged Array :-- ");

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr2[i]);
    }
}
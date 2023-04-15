#include <stdio.h>

int main()
{
    int arr[10] , arr1[10];

    printf("Enter Elements in array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr1[i] = arr[i] ;
    }

    printf("Elements of Copied Array :-- ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
}
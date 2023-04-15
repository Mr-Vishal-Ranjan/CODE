#include <stdio.h>

int main()
{
    int arr[10] = {0,0,0,0,0,0,0,0,0,0} , x;

    printf("Enter location in array :-- ");

    scanf("%d", &x);

    printf("Enter Element :-- ");

    scanf("%d", &arr[x]);

    printf("Elements of array :-- ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
#include <stdio.h>

int main()
{
    int arr[3][3] , x;

    printf("Enter Elements of First Matrix :-- \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter Elements of Second Matrix :-- \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x);
            arr[i][j] += x;
        }
    }

    printf("Sum of Matrix :-- \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
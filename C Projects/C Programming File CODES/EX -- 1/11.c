#include <stdio.h>

int main()
{
    int arr[3][3];

    printf("Enter Elements of Matrix :-- \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose of Matrix :-- \n");

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
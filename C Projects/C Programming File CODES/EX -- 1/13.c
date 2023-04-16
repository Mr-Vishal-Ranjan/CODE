#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], mul[3][3];

    printf("Enter the elements of matrix A:\n");

    // Read the elements of matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");

    // Read the elements of matrix B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrix A and matrix B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");

    // Print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

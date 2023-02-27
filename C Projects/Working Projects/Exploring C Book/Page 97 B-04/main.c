#include<stdio.h>
int main(){
    int i,j,k,l;
    printf("\nFor condition i + j + k = l :--\n");
    for (l = 1; l <= 1000; l++)
    {
        for (i = 1; i <= 1000; i++)
        {
            for (j = 1; j <= 1000; j++)
            {
                for (k = 1; k <= 1000; k++)
                {
                    if (i + j + k == l)
                    {
                        printf("i=%d,j=%d,k=%d,l=%d\n", i, j, k, l);
                    }
                }
            }
        }
    }

    printf("/nFor condition i > j > k > l :--/n");
    for (l = 1; l <= 1000; l++)
    {
        for (i = 1; i <= 1000; i++)
        {
            for (j = 1; j <= 1000; j++)
            {
                for (k = 1; k <= 1000; k++)
                {
                    if (i > j > k > l)
                    {
                        printf("i=%d,j=%d,k=%d,l=%d\n", i, j, k, l);
                    }
                }
            }
        }
    }
}
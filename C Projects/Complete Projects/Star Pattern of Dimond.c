#include<stdio.h>

int main()
{
    int i,j ;
    for(j=1; j<=4; j++)
    {
        for(i=1; i<=7; i++)
        {
            if(i>=5-j&&i<=3+j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    for(j=5; j<=7; j++)
    {
        for(i=1; i<=7; i++)
        {
            if(i>=j-3&&i<=11-j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
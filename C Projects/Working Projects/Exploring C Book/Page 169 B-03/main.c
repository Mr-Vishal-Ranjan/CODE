#include <stdio.h>

int main(){

    float x , sum = 0 , i , j , n = 1 , f = 1, p = 1 ;

    printf("Enter value of X :-- ");
    scanf("%f",&x);

    for ( i = 0; i < 9; i++)
    {
        n = n + 2 ;

        f = n ;
        p = 1 ;

        for (j = 1; j <= n; j++)
        {
            if ( n != j)
            {
                f = f * (n - j);
            }
            
            p = p * x ;
        }

        sum = (p / f) + sum;

        n = n + 2;

        f = n;
        p = 1;

        for (j = 1; j <= n; j++)
        {
            if (n != j)
            {
                f = f * (n - j);
            }
            
            p = p * x;
        }

        sum = sum - (p / f) ;
    }

    sum = x - sum ;

    printf("Sum of first ten digit is %f \n", sum );

}
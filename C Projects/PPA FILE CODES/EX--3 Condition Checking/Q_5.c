#include <stdio.h>

int main()
{
    int num , rev_num = 0 ,temp , i;

    printf("Enter three digit number --> ");
    scanf("%d",&num);

    if (num>99 && num<1000)
    {
        for ( i = 0; i < 3; i++)
        {
            temp = num % 10 ;
            num = num / 10 ;
            rev_num = rev_num * 10 + temp  ;
        }
        
        printf("Reversed number is %d ",rev_num);
    }

    else
    {
        printf("WRONG NUMBER\n");
    }
    
    
    return 0;
}
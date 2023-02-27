#include <stdio.h>
int main(){
    
    int num , rem , x , note , num0 ;
    x = 0 ;
    note = 100 ;

    printf("Enter amount :- ");
    scanf("%d",&num);
    
        while (rem != 0)
        {
            num0 = num / 100;
            x = num0 + x;
            rem = num % 100;
            num = rem;
            printf("\nNumber of 100 notes required is %d\n",num0);

            num0 = num / 50;
            x = num0 + x;
            rem = num % 50;
            num = rem;
            printf("\nNumber of 50 notes required is %d\n", num0);

            num0 = num / 10;
            x = num0 + x;
            rem = num % 10;
            num = rem;
            printf("\nNumber of 10 notes required is %d\n", num0);

            num0 = num / 5;
            x = num0 + x;
            rem = num % 5;
            num = rem;
            printf("\nNumber of 5 notes required is %d\n", num0);

            num0 = num / 2;
            x = num0 + x;
            rem = num % 2;
            num = rem;
            printf("\nNumber of 2 notes required is %d\n", num0);

            num0 = num / 1;
            x = num0 + x;
            rem = num % 1;
            num = rem;
            printf("\nNumber of 1 notes required is %d\n", num0);
        }
        
        
    
    printf("\nTotal numbers of notes required is %d\n",x);

}

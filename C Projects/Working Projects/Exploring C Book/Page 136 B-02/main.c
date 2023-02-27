#include <stdio.h>
int main(){
 
    int num,remainder,reverse_num,x,p=1,base;
    x=0,reverse_num=0;
    printf("Enter number and base : ");
    scanf("%d %d",&num,&base);

    while (num!=0)
    {
        remainder=num%base;
        num=num/base;
        x=x+(remainder*p);
        p=p*10;

    }

    printf("%d\n", x);

    return 0;
}
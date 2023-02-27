#include<stdio.h>

int main()
{
    int a, b;
    printf("#Numbers Swapping program\n");
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d and b=%d",a,b);
     
    return 0;
}
    
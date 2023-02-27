#include<stdio.h>

int main()
{
    int a, b;
    printf("#Numbers Swapping program\n");
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d and b=%d\n",a,b);
     
    return 0;
}
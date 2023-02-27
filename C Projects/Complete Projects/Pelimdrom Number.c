#include<stdio.h>

int main()
{
    int a,b=0,c,d;
    printf("enter a number\n");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
    c=a%10;
    b=b*10+c;
    a=a/10;
    }  
   
   if(b==d)
    printf("Pelimdrom number");
   else
    printf("Non-Pelimdrom number");
    
    return 0;
}
#include<stdio.h>
int main(){
    int i,j,rem,a;
    j=7;
    printf("Enter number for round off\n");
    scanf("%d",&i);
    rem=i%j;
    //printf("%d\n",rem);
    a=j-rem;
    printf("Round off number is %d\n",a+i);
        
}
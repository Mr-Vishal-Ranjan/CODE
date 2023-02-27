#include<stdio.h>
int main(){
    /*int d1,m1,y1;
    int d2,m2,y2;
    printf("# Enter date in DD/MM/YYYY format\n");
    printf("Enter first date\n");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter second date\n");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    */
   int days,week;
   days=31+29+31+30+31;
   week=days/7;
   printf("Total days --> %d\n",days);
   printf("Total weeks--> %d\n",week);
}
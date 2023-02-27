#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   long x=0;
   long getintegeronly();
   x=getintegeronly();
   char str[1000];
   itoa(x,str,10);
   printf("\nEntered %s",str);

}

 long getintegeronly()
 {
  int ch,i;
  long num=0;
  while(1)
  {
    ch=getchar();
    //scanf("%d",&ch);
    if (ch>=48&&ch<=57)
    {
      //printf("\n-->>%d",ch);
      num=num*10+(ch-48);

    }

    if(ch==10)
    break;
   }//while(1);
  printf("\n%ld",num);
  return(num);
 }

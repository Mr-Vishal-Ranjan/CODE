#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,i;
  scanf("%d",&a);
  b=0;
  for(i=0;i<=7;i++){
  c=a%10;
    a=a/10;
    b=b+c;
   }
   printf("%d",b);
}

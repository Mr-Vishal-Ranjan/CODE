#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[15][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
   int a,b,c;
   scanf("%d%d",&a,&b);
   c=10;
   for (a; a<=b; a++)
   if(a<=9)
   printf("%s\n",str[a]);

   for (c; c<=b; c++)
   {
   if(c%2==0)
     printf("even\n");
   else
     printf("odd\n");
     }

}

#include <stdio.h>
#include <stdlib.h>
#define BASE 10 /* Constant */


int main()
{
  long x=0;
  long getintegeronly();
  x=getintegeronly();
    long num, n, lastDigit;
    int i;
    long freq[BASE];

    num=x;

    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }


    n = num;


    while(n != 0)
    {

        lastDigit = n % 10;


        n /= 10;


        freq[lastDigit]++;
    }


    for(i=0; i<BASE; i++)
    {
        printf("%d ", freq[i]);
    }

    return 0;
}

long getintegeronly()
 {
  long num=0,ch;
  while
  {
    ch=getchar();
    if (ch>=48&&ch<=57)
    {
      //printf("%c",ch);
      num=num*10+(ch-48);

    }

    if(ch==10)
    break;
  }//while(1);
  return(num);
 }


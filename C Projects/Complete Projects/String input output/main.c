#include<stdio.h>
#define BASE 10 /* Constant */


int main(){
    int x=0;
    x=getintegeronly();
    long long num, n;
    int i, lastDigit;
    int freq[BASE];
    x=num;
    //printf("entered %d",x);
    //getch;
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    /* Copy the value of 'num' to 'n' */
    n = num;

    /* Run till 'n' is not equal to zero */
    while(n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    /* Print frequency of each digit */
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;

}

 int getintegeronly()
 {
  int num=0,ch;
  do
  {
    ch=getchar();
    if (ch>=48&&ch<=57)
    {
      printf("%c",ch);
      num=num*10+(ch-48);

    }
    if(ch==13)
    break;
  }while(1);
  return(num);
 }

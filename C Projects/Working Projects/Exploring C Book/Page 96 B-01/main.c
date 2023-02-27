#include <stdio.h>
int main(){
    float a=0.01;
    float b=0.005;
    float c=0.00001;
    float d=0.01;
    int Rtoday=10000;
    int Rtomorrow;
    int Wtoday=1000;
    int Wtomorrow; 
    int i,j,k;

    for (i = 0; i < 40; i++)
    {
        for ( j = 0; j <= 0; j++)
        {
           for ( k = 0; k < 25; k++)
           {
              Rtomorrow=((1+a)*(Rtoday))-(c*(Rtoday*Wtoday));
              Wtomorrow=((1-b)*(Wtoday))+(c*(d*(Rtoday*Wtoday)));

              Rtoday=Rtomorrow;
              Wtoday=Wtomorrow;
           }
           
            printf("\n%d result\n",i+1);

            if (Rtoday>0)
            printf("Rabbit --> %d\n",Rtoday);

            else
            printf("Rabbit --> 0 \n");

            if (Wtoday>0)
            printf("Wolves --> %d\n",Wtoday);

            else
            printf("Wolves --> 0 \n0");
           
        }

        if (Rtoday==0 && Wtoday==0)
        {
            break;
        }
        
        
    }
    


}
#include <stdio.h>
int main()
{

    int x, y,point,r;
    point=0;
    printf("Enter value of radius\n");
    scanf("%d", &r);
    for (x = 0; x <= r; x++)
    {
        for (y = 0; y <= r; y++)
        {
            if (x * x + y * y <= r * r)
            {

                point ++;
            }
        }
    }
        point=point*4+1;
        printf("\nTotal numbers of point is %d\n",point);
}
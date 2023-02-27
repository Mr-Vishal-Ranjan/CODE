#include <stdio.h>
#include <math.h>
int main()
{

    int num, left, right, x, y, i, a, d1, d2, d3, d4;

    for (i = 1000; i <= 9999; i++)
    {
        a = sqrt(i);
        if (i == a * a)
        {
            num = i;
            d4 = num % 10;
            num = num / 10;
            d3 = num % 10;
            num = num / 10;
            d2 = num % 10;
            num = num / 10;
            d1 = num % 10;

            left = d1 * 10 + d2;
            right = d3 * 10 + d4;

            x = sqrt(left);
            y = sqrt(right);

            if (left == x * x && right == y * y)
            {
                printf("desired no. is %d\n", i);
            }
        }
    }
}
#include <stdio.h>

#include <stdio.h>

float x, sum = 0, i, j, n = 1, f = 1, p = 1;

int for2()
{

    if (n != j)
    {
        f = f * (n - j);
    }

    p = p * x;

    j++;

    if (j <= n)
    {
        for2();
    }
}

int for1()
{
    n = n + 2;

    f = n;
    p = 1;

    for2();

    sum = (p / f) + sum;

    n = n + 2;

    f = n;
    p = 1;

    for2();

    sum = sum - (p / f);

    i++;

    if (i < 9)
    {
        for1();
    }

    return sum;
}

int a()
{

    printf("Enter value of X :-- ");
    scanf("%f", &x);

    for1();

    sum = x - sum;

    printf("Sum of first ten digit is %f \n", sum);
}

int main()
{
    a();
}
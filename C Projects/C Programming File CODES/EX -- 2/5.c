#include <stdio.h>

int main()
{
    int *arr[3];

    int p = 40, q = 60, r = 90;

    arr[0] = &p;

    arr[1] = &q;

    arr[2] = &r;

    for (int i = 0; i < 3; i++)

    {

        printf("For the Address = % d\t the Value would be = % d\n", arr[i], *arr[i]);
    }
}
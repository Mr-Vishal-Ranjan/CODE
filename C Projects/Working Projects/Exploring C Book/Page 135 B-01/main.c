#include <stdio.h>
int main()
{

    int num, i, a , remainder , reverse_num;
    printf("Enter a number\n");
    scanf("%d",&num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder;
        num = (num - remainder) / 10;
    }

    for (i = 0; i <= 10; i++)
    {
        a = reverse_num % 10;
        if (a!=0)
        {
            checker(a);
        }
        
        reverse_num = reverse_num / 10;
    }
    return 0;
}

int checker(int x)
{
    switch (x)
    {
    case 0:
        printf("Zero ");
        break;

    case 1:
        printf("One ");
        break;

    case 2:
        printf("Two ");
        break;

    case 3:
        printf("Three ");
        break;

    case 4:
        printf("Four ");
        break;

    case 5:
        printf("Five ");
        break;

    case 6:
        printf("Six ");
        break;

    case 7:
        printf("Seven ");
        break;

    case 8:
        printf("Eight ");
        break;

    case 9:
        printf("Nine ");
        break;

    default:
        break;
    }
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String :- ");

    gets(str);

    int length = strlen(str);

    printf("Length of the string: %d\n", length);
}
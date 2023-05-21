#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    int result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }

    else
    {
        printf("Both strings are not equal.\n");
    }

    return 0;
}

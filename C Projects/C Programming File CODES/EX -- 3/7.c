#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);
    int i, j ;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("The string is not a palindrome.\n");
            exit(0);
        }
    }

    printf("The string is a palindrome.\n");

}

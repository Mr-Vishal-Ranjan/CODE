#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

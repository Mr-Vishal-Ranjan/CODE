#include <stdio.h>
#include <string.h>

int main()
{
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    gets(source);

    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

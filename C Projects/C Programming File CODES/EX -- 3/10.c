#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int freq[256] = {0}; // Frequency array for all possible ASCII characters

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", (char)i, freq[i]);
        }
    }
}

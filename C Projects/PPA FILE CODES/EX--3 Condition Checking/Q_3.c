#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a Alphabet --> ");
    scanf("%c", &ch);

    if (ch == 'a'|| ch == 'A'|| ch == 'e'|| ch == 'E'|| ch == 'i'|| ch == 'I'|| ch == 'o'|| ch == 'O'|| ch == 'u'|| ch == 'U')
    {
        printf("Alphabet is Vowel\n");
    }

    else
    {
        printf("Alphabet is Consonent\n ");
    }

    return 0;
}
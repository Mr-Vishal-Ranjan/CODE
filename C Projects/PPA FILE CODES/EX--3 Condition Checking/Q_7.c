#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Alpahabet --> ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Alphabet is Vowel");
        break;

    default:
        printf("Alphabet is Consonent");
        break;
    }
    return 0;
}
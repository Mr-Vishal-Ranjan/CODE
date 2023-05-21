#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    int i, j, k;

    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length;)
        {
            if (str[i] == str[j])
            {
                
                for (k = j; k < length; k++)
                {
                    str[k] = str[k + 1];
                }
                length--;
            }
            else
            {
                j++;
            }
        }
    }
    str[length] = '\0'; 

    printf("String after removing repeated characters: %s\n", str);

}

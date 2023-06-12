#include <stdio.h>

void reverseFile(FILE *file)
{
    char ch = fgetc(file);

    if (ch != EOF)
    {
        reverseFile(file);
        printf("%c", ch);
    }
}

int main()
{
    FILE *file;
    char filename[] = "input.txt";

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    reverseFile(file);

    fclose(file);

    return 0;
}

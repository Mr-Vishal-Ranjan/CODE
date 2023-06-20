#include <stdio.h>

int main()
{
    FILE *sourceFile, *destinationFile;
    char sourceFilename[] = "source.txt";
    char destinationFilename[] = "destination.txt";

    sourceFile = fopen(sourceFilename, "r");
    destinationFile = fopen(destinationFilename, "a");

    if (sourceFile == NULL || destinationFile == NULL)
    {
        printf("Failed to open the files.\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Content of '%s' appended at the end of '%s' successfully.\n", sourceFilename, destinationFilename);

    return 0;
}
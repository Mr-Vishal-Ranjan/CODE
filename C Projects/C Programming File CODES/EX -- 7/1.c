#include <stdio.h>

int main()
{
    FILE *file;
    char information[100];

    // Open the file in write mode
    file = fopen("information.txt", "w");

    if (file == NULL)
    {
        printf("Failed to create the file.\n");
        return 1;
    }

    printf("Enter information: ");
    fgets(information, sizeof(information), stdin);

    // Write the information to the file
    fprintf(file, "%s", information);

    // Close the file
    fclose(file);

    printf("Information stored in the file successfully.\n");

    return 0;
}

#include <stdio.h>

#define OPTION1

int main()
{
#ifdef OPTION1
    printf("Option 1 is enabled!\n");
#endif

#ifndef OPTION2
    printf("Option 2 is not enabled!\n");
#endif

#ifdef OPTION3
    printf("Option 3 is enabled!\n");
#else
    printf("Option 3 is not enabled!\n");
#endif

    return 0;
}
